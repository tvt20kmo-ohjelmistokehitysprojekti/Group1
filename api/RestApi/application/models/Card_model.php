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
        $this->db->join('card', 'card.card_id = transact.card_id', 'inner');
        $this->db->where('card.card_id', $card_id);
        if ($account_type < 2) $this->db->where('transact.account_type', $account_type);
        $this->db->order_by('time', 'DESC');
        $result = $this->db->get()->result();

        return $result;
    }

    public function get_info($card_id)
    {
        $this->db->select('a.number, a.credit_limit, u1.first_name, u1.last_name');
        $this->db->from('account a');
        $this->db->join('card c1', 'c1.account_id = a.account_id', 'inner');
        $this->db->join('user u1', 'u1.user_id = a.user_id', 'inner');
        $this->db->where('c1.card_id', $card_id);

        $account = $this->db->get()->result();

        $this->db->select('u2.first_name, u2.last_name, c2.number, c2.type');
        $this->db->from('user u2');
        $this->db->join('card c2', 'c2.user_id = u2.user_id', 'inner');
        $this->db->where('c2.card_id', $card_id);

        $card = $this->db->get()->result();

        $result = array($account,  $card);

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
