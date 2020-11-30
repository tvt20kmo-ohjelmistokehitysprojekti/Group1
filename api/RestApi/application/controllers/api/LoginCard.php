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
class LoginCard extends REST_Controller {

    function __construct()
    {
        //enable cors
        header('Access-Control-Allow-Origin: *');
        header("Access-Control-Allow-Methods: PUT, GET, POST");
        // Construct the parent class
        parent::__construct();

        $this->load->model('Login_model');
        $this->load->model('Key_model');
    }

    public function index_get()
    {
        echo "gege";
    }

    public function login_put()
    {
        // Get PUT-variables from input stream

        $card_number = $this->input->input_stream("card_number");
        $card_pin = $this->input->input_stream("card_pin");

        // If they are NULL then return
        if ($card_number == NULL || $card_pin == NULL) $this->response(['status' => FALSE, 'message' => 'Insert Card and Pin'], REST_Controller::HTTP_OK);

        // Search correct card with login_model from database
        $log_status = $this->Login_model->login_card($card_number, $card_pin);

        // If card found then return result JSON-object
        if ($log_status != NULL)
        {
            $key = $this->Key_model->generate_key(32);
            $this->Key_model->store_key($key, (int)$log_status->card_id);

            $this->response(['status' => TRUE, 'key' => $key, 'result' => $log_status], REST_Controller::HTTP_OK);
        }
        else
        {
            // Else post response Message
            $this->response(['status' => FALSE, 'message' => 'Wrong Card or Pin'], REST_Controller::HTTP_OK);
        }
    }

    public function logout_put()
    {
        $key = $this->input->input_stream("key");
        if ($key == NULL) return;

        $this->Key_model->delete_key($key);

        $this->response(['status' => TRUE, 'message' => 'Logged Out'], REST_Controller::HTTP_OK);
    }
}
