<?php

class Key_model extends CI_model
{
    function generate_key($length)
    {
        $key = "";

        for ($i = 0; $i < $length; $i++)
        {
            if (rand(0, 1)) $key .= chr(rand(65, 90));
              else $key .= chr(rand(48, 57));
        }

        return $key;
    }

    function store_key($key, $card_id)
    {
        $data = array(
               'value' => $key,
               'card_id' => $card_id
        );

        $this->db->insert('apikey', $data);
        return;
    }

    function update_key($key)
    {
        $this->db->set('time', 'CURRENT_TIMESTAMP', FALSE);
        $this->db->where('value', $key);
        $this->db->update('apikey');
        return;
    }

    function delete_key($key)
    {
        $this->db->where('value', $key);
        $this->db->delete('apikey');
        return;
    }

    /*function delete_old_keys()
    {
      DELETE FROM `users`
      WHERE `time` >= TIMESTAMPADD(DAY, 1, NOW());
      $this->db->where('time', )
    }*/

    function validate_key($key)
    {
        $this->db->select('card_id');
        $this->db->where('value', $key);
        $this->db->from('apikey');
        $result = $this->db->get()->row('card_id');

        return $result;
    }

    function get_key_info($key)
    {
        $this->db->select('card_id, account_type');
        $this->db->where('value', $key);
        $this->db->from('apikey');
        $result = $this->db->get()->row();

        return $result;
    }
}
