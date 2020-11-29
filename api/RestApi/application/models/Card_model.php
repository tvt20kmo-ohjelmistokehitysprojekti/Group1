<?php

class Card_model extends CI_model
{
    public function get_balance($card_id, $account_type)
    {
        if ($account_type == 0) $this->db->select('account.balance');
          else $this->db->select('account.credit_balance');

        $this->db->from('account');
        $this->db->join('card', 'card.account_id = account.account_id', 'inner');
        $this->db->where('card.card_id', $card_id);

        if ($account_type == 0) $result = $this->db->get()->row('balance');
            else $result = $this->db->get()->row('credit_balance');

        return $result;
    }

    public function withdraw_money($card_id, $account_type, $amount)
    {
        if ($account_type == 0) $sql = "CALL withdraw_debit(".$card_id.",".$amount.");";
          else $sql = "CALL withdraw_credit(".$card_id.",".$amount.");";

        $query = $this->db->query($sql);
        $result = $query->row('ret');

        $query->free_result();

        return $result;
    }

    public function pay_credit($card_id, $amount)
    {
        $sql = "CALL pay_credit(".$card_id.",".$amount.");";

        $query = $this->db->query($sql);
        $result = $query->row('ret');

        $query->free_result();

        return $result;
    }

    public function get_transacts($card_id, $account_type)
    {
        $this->db->select('time, amount, account_type');
        $this->db->from('transact');
        $this->db->join('card', 'card.account_id = transact.account_id', 'inner');
        $this->db->where('card.card_id', $card_id);
        if ($account_type < 2) $this->db->where('transact.account_type', $account_type);
        $result = $this->db->get()->result();

        return $result;
    }

    public function get_card_type($card_id)
    {
        $this->db->select('type');
        $this->db->from('card');
        $this->db->where('card_id', $card_id);
        $result = $this->db->get()->row('type');

        return $result;
    }
}
