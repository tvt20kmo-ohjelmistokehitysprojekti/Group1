<?php

class Login_model extends CI_model
{
    function login_card($card_number, $card_pin)
    {
        // Build SQl-query to get data from database
        $this->db->select('card.card_id, card.type, user.*');
        $this->db->from('user');
        $this->db->join('card', 'card.user_id = user.user_id', 'inner');
        $this->db->where('card.number', $card_number);
        $this->db->where('card.pin', $card_pin);

        // Return result as JSON-object, if card not found, database returns empty array
        $result = $this->db->get()->row();
        return $result;
    }
}
