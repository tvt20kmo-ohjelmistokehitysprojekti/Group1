<?php

class Login_model extends CI_model
{
    function get_balance($card_id)
    {
      if ($card_id == NULL) return FALSE;

      $this->db->select('account.balance, account.id, card.account, card.id');
      $this->db->from('account');
      $this->db->join('card', 'card.account = account.id', 'inner');
      $this->db->where('card.id', $card_id);

      return array_column($this->db->get()->result(), 'balance');
    }

    function withdraw_money($card_id, $amount)
    {
      if ($card_id == NULL) return FALSE;

      $sql = "CALL withdraw(".$card_id.",".$amount.");";
      $query = $this->db->query($sql);
      $result = $query->result();

      $query->free_result();

      return array_column($result, 'ret');
    }
}
