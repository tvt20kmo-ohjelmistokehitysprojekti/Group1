<?php

defined('BASEPATH') OR exit('No direct script access allowed');

class Rest_server extends REST_Controller {

    public function index()
    {
        $this->load->helper('url');
    }
}
