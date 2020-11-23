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
        header("Access-Control-Allow-Methods: POST");
        // Construct the parent class
        parent::__construct();

        $this->load->model('Card_model');
    }

    public function get_balance_post()
    {
        $card_id = $this->input->post("card_id");
        if ($card_id == NULL) return;

        //$card_id = $_POST["card_id"];

        $balance = $this->Card_model->get_balance($card_id);

        if ($balance) $this->response((int)$balance[0], REST_Controller::HTTP_OK);
        else
        {
            $this->response(['status' => FALSE, 'message' => 'No Bank Account for card'], REST_Controller::HTTP_NOT_FOUND);
        }
    }

    public function withdraw_post()
    {
        $card_id = $this->post("card_id");
        $amount = $this->post("amount");

        if ($card_id == NULL || $amount == NULL) return;
        /*if (!isset($_POST["card_id"]) || !isset($_POST["amount"])) return;

        $card_id = $_POST["card_id"];
        $amount = $_POST["amount"];*/

        $response = $this->Card_model->withdraw_money($card_id, $amount);

        if ((int)$response[0] == 1) $this->response("Withdraw Succesful", REST_Controller::HTTP_OK);
        else
        {
            $this->response(['status' => FALSE, 'message' => 'No Balance on Bank Account'], REST_Controller::HTTP_NOT_FOUND);
        }
    }
}
