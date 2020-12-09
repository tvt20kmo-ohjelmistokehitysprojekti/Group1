<?php

class Login_model extends CI_model
{
    function login_card($card_number, $card_pin)
    {
        // Add pepper to pin code and hash it
        $card_pin .= "bankmaatti";
        $pin_hashed = hash('sha256', $card_pin);

        // Build SQl-query to get data from database
        $this->db->select('card.card_id, card.type');
        $this->db->from('card');
        $this->db->where('card.number', $card_number);
        $this->db->where('card.pin', $pin_hashed);

        // Return result as JSON-object, if card not found, database returns empty array
        $result = $this->db->get()->row();
        return $result;
    }
}
