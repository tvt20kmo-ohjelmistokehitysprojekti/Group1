-- phpMyAdmin SQL Dump
-- version 4.7.5
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: 29.11.2020 klo 16:56
-- Palvelimen versio: 5.6.34
-- PHP Version: 7.1.11

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `cardapp`
--

DELIMITER $$
--
-- Proseduurit
--
CREATE PROCEDURE `pay_credit` (IN `_card_id` INT UNSIGNED, IN `_amount` INT)  NO SQL
BEGIN

DECLARE a_id int unsigned;
DECLARE a_balance int;
DECLARE a_credit_balance int;
DECLARE ret tinyint;

SELECT a.account_id, a.balance, a.credit_balance INTO a_id, a_balance, a_credit_balance FROM account a INNER JOIN card ON card.account_id = a.account_id WHERE card.card_id = _card_id;

IF (a_credit_balance + _amount > 0) THEN SET _amount = -a_credit_balance;
END IF;

IF (a_balance - _amount >= 0)
THEN
	BEGIN
	UPDATE account SET balance = balance - _amount, credit_balance = credit_balance + _amount WHERE account_id = a_id;
    INSERT INTO transact(amount, account_type, account_id, card_id) VALUES(_amount, 2, a_id, _card_id);
    SEt ret = 1;
    END;
ELSE
	SET ret = 0;
END IF;

SELECT ret;
END$$

CREATE PROCEDURE `withdraw_credit` (IN `_card_id` INT UNSIGNED, IN `_amount` INT)  NO SQL
BEGIN

DECLARE a_id int unsigned;
DECLARE a_balance int;
DECLARE a_limit int unsigned;
DECLARE ret boolean;

SELECT a.account_id, a.credit_balance, a.credit_limit INTO a_id, a_balance, a_limit FROM account a INNER JOIN card ON card.account_id = a.account_id WHERE card.card_id = _card_id;

IF (a_balance + _amount >= -(a_limit))
THEN
	BEGIN
	UPDATE account SET credit_balance = (credit_balance + _amount) WHERE account_id = a_id;
    INSERT INTO transact(amount, account_type, account_id, card_id) VALUES(_amount, 1, a_id, _card_id);
    SEt ret = true;
    END;
ELSE
	SET ret = false;
END IF;

SELECT ret;
END$$

CREATE PROCEDURE `withdraw_debit` (IN `_card_id` INT(10) UNSIGNED, IN `_amount` INT(11))  MODIFIES SQL DATA
BEGIN

DECLARE a_id int unsigned;
DECLARE a_balance int;
DECLARE ret boolean;

SELECT a.account_id, a.balance INTO a_id, a_balance FROM account a INNER JOIN card ON card.account_id = a.account_id WHERE card.card_id = _card_id;

IF (a_balance + _amount >= 0)
THEN
	UPDATE account SET balance = (balance + _amount) WHERE account_id = a_id;
    INSERT INTO transact(amount, account_type, account_id, card_id) VALUES(_amount, 0, a_id, _card_id);
    SEt ret = true;
ELSE
	SET ret = false;
END IF;

SELECT ret;
END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Rakenne taululle `account`
--

CREATE TABLE `account` (
  `account_id` int(10) UNSIGNED NOT NULL,
  `number` int(10) UNSIGNED DEFAULT NULL,
  `type` tinyint(1) DEFAULT '0',
  `balance` int(11) NOT NULL DEFAULT '0',
  `credit_balance` int(10) NOT NULL DEFAULT '0',
  `credit_limit` int(11) DEFAULT '0',
  `user_id` int(10) UNSIGNED NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Vedos taulusta `account`
--

INSERT INTO `account` (`account_id`, `number`, `type`, `balance`, `credit_balance`, `credit_limit`, `user_id`) VALUES
(2, NULL, 0, 4586, 0, 0, 1),
(3, 122233, 1, 850, 0, 1000, 3);

-- --------------------------------------------------------

--
-- Rakenne taululle `apikey`
--

CREATE TABLE `apikey` (
  `key_id` int(10) UNSIGNED NOT NULL,
  `value` varchar(32) DEFAULT NULL,
  `time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `card_id` int(10) UNSIGNED NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Rakenne taululle `card`
--

CREATE TABLE `card` (
  `card_id` int(10) UNSIGNED NOT NULL,
  `number` int(10) UNSIGNED NOT NULL,
  `pin` int(10) UNSIGNED NOT NULL,
  `type` tinyint(3) UNSIGNED NOT NULL DEFAULT '0',
  `user_id` int(10) UNSIGNED NOT NULL,
  `account_id` int(10) UNSIGNED DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Vedos taulusta `card`
--

INSERT INTO `card` (`card_id`, `number`, `pin`, `type`, `user_id`, `account_id`) VALUES
(1, 123456, 1111, 0, 0, 0),
(2, 112233, 1234, 0, 1, 2),
(3, 111222, 1111, 2, 2, 3);

-- --------------------------------------------------------

--
-- Rakenne taululle `transact`
--

CREATE TABLE `transact` (
  `transact_id` int(10) UNSIGNED NOT NULL,
  `time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `amount` int(11) NOT NULL,
  `account_type` tinyint(1) NOT NULL,
  `card_id` int(10) UNSIGNED NOT NULL,
  `account_id` int(10) UNSIGNED NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Vedos taulusta `transact`
--

INSERT INTO `transact` (`transact_id`, `time`, `amount`, `account_type`, `card_id`, `account_id`) VALUES
(25, '2020-11-23 12:46:27', 20, 0, 2, 2),
(26, '2020-11-23 12:46:52', -40, 0, 2, 2),
(27, '2020-11-23 13:40:05', 566, 0, 2, 2),
(28, '2020-11-23 17:40:34', 566, 0, 2, 2),
(29, '2020-11-24 13:59:23', 200, 0, 2, 2),


-- --------------------------------------------------------

--
-- Rakenne taululle `user`
--

CREATE TABLE `user` (
  `user_id` int(10) UNSIGNED NOT NULL,
  `first_name` varchar(64) NOT NULL,
  `last_name` varchar(64) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Vedos taulusta `user`
--

INSERT INTO `user` (`user_id`, `first_name`, `last_name`) VALUES
(1, 'Erkki', 'Pertti'),
(2, 'Matti', 'Tattila');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `account`
--
ALTER TABLE `account`
  ADD PRIMARY KEY (`account_id`),
  ADD KEY `owner` (`user_id`);

--
-- Indexes for table `apikey`
--
ALTER TABLE `apikey`
  ADD PRIMARY KEY (`key_id`),
  ADD UNIQUE KEY `value` (`value`);

--
-- Indexes for table `card`
--
ALTER TABLE `card`
  ADD PRIMARY KEY (`card_id`),
  ADD UNIQUE KEY `number` (`number`);

--
-- Indexes for table `transact`
--
ALTER TABLE `transact`
  ADD PRIMARY KEY (`transact_id`);

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`user_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `account`
--
ALTER TABLE `account`
  MODIFY `account_id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `apikey`
--
ALTER TABLE `apikey`
  MODIFY `key_id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=71;

--
-- AUTO_INCREMENT for table `card`
--
ALTER TABLE `card`
  MODIFY `card_id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `transact`
--
ALTER TABLE `transact`
  MODIFY `transact_id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=52;

--
-- AUTO_INCREMENT for table `user`
--
ALTER TABLE `user`
  MODIFY `user_id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

DELIMITER $$
--
-- Tapahtumat
--
CREATE EVENT `delete_old_keys` ON SCHEDULE EVERY 1 HOUR STARTS '2020-11-28 20:16:52' ON COMPLETION NOT PRESERVE ENABLE DO DELETE FROM apikey WHERE TIMESTAMPDIFF(HOUR, time, CURRENT_TIMESTAMP) > 1$$

DELIMITER ;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
