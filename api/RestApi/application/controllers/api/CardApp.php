<?php

defined('BASEPATH') OR exit('No direct script access allowed');

// This can be removed if you use __autoload() in config.php OR use Modular Extensions
/** @noinspection PhpIncludeInspection */
require APPPATH . 'libraries/REST_Controller.php';

/**
 * This is an example of a RestApi based on PHP and CodeIgniter 3.
 *
 *
 * @package         CodeIgniter
 * @subpackage      Rest Server
 * @category        Controller
 * @author          (Edited version from Phil Sturgeon, Chris Kacerguis)
 * @license         MIT
 * @link            https://github.com/chriskacerguis/codeigniter-restserver
 */
class CardApp extends REST_Controller {

    function __construct()
    {
        //enable cors
        header('Access-Control-Allow-Origin: *');
        header("Access-Control-Allow-Methods: PUT");
        // Construct the parent class
        parent::__construct();

        $this->load->model('Card_model');
        $this->load->model('Key_model');
    }

    private function check_info($data, $all_types)
    {
        $result = array();
        foreach ($data as $k)
        {
            $v = $this->input->input_stream($k);
            if ($v == NULL) $this->response(['status' => FALSE, 'message' => 'Need Info'], REST_Controller::HTTP_OK);
            $result[$k] = $v;
        }

        $card_id = $this->Key_model->validate_key($result['key']);
        if ($card_id == NULL) $this->response(['status' => FALSE, 'message' => 'Invalid Key'], REST_Controller::HTTP_OK);
        $result['card_id'] = $card_id;

        if (isset($result['account_type']))
        {
            $available_types = $this->Card_model->get_card_type($card_id);
            if ($available_types < 2 && $available_types != $result['account_type'] && $all_types == FALSE)
                $this->response(['status' => FALSE, 'message' => 'Invalid Account Type for Card'], REST_Controller::HTTP_OK);
        }

        return $result;
    }

    public function get_balance_put()
    {
        $data = $this->check_info(array('key', 'account_type'), TRUE);

        $result = $this->Card_model->get_balance($data['card_id'], $data['account_type']);

        if ($result != NULL) $this->response(['status' => TRUE, 'balance' => $result], REST_Controller::HTTP_OK);
            else $this->response(['status' => FALSE, 'message' => 'No Bank Account for card'], REST_Controller::HTTP_OK);
    }

    public function get_transacts_put()
    {
        $data = $this->check_info(array('key', 'account_type'), TRUE);

        $result = $this->Card_model->get_transacts($data['card_id'], $data['account_type']);

        if ($result) $this->response(['status' => TRUE, 'transacts' => $result], REST_Controller::HTTP_OK);
            else $this->response(['status' => FALSE, 'message' => 'No Transacts Found'], REST_Controller::HTTP_OK);
    }

    public function withdraw_put()
    {
        $data = $this->check_info(array('key', 'account_type', 'amount'), FALSE);

        $result = $this->Card_model->withdraw_money($data['card_id'], $data['account_type'], $data['amount']);

        if ((int)$result == 1) $this->response(['status' => TRUE, 'message' => "Withdraw Succesful"], REST_Controller::HTTP_OK);
            else $this->response(['status' => FALSE, 'message' => 'No Balance on Bank Account'], REST_Controller::HTTP_OK);
    }

    public function get_info_put()
    {
        $data = $this->check_info(array('key'), TRUE);

        $result = $this->Card_model->get_info($data['card_id']);

        if ($result) $this->response(['status' => TRUE, 'account_info' => $result[0], 'card_info' => $result[1]], REST_Controller::HTTP_OK);
            else $this->response(['status' => FALSE, 'message' => 'No Account Info Found'], REST_Controller::HTTP_OK);
    }

    public function pay_credit_put()
    {
        $data = $this->check_info(array('key', 'amount'), FALSE);

        $available_types = $this->Card_model->get_card_type($data['card_id']);
        if ($available_types == 1) $this->response(['status' => FALSE, 'message' => 'Invalid Account Type for Card'], REST_Controller::HTTP_OK);

        $credit_loan = $this->Card_model->get_balance($data['card_id'], 1);
        if ($credit_loan == 0) $this->response(['status' => FALSE, 'message' => 'No Credit Loan to Pay'], REST_Controller::HTTP_OK);

        $result = $this->Card_model->pay_credit($data['card_id'], $data['amount']);

        if ((int)$result == 1) $this->response(['status' => TRUE, 'message' => "Credit Loan Paid Succesfully"], REST_Controller::HTTP_OK);
            else $this->response(['status' => FALSE, 'message' => 'No Balance on Bank Account'], REST_Controller::HTTP_OK);
    }
}
