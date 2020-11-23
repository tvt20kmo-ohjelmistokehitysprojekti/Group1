-- phpMyAdmin SQL Dump
-- version 4.7.5
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: 23.11.2020 klo 14:46
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
CREATE DEFINER=`root`@`localhost` PROCEDURE `withdraw` (IN `card_id` INT(10) UNSIGNED, IN `_amount` INT(11))  MODIFIES SQL DATA
BEGIN

DECLARE a_id int unsigned;
DECLARE a_balance int;
DECLARE ret boolean;

SELECT a.id, a.balance INTO a_id, a_balance FROM account a INNER JOIN card ON card.account = a.id;

IF (a_balance + _amount > 0)
THEN
	UPDATE account SET balance = (balance + _amount) WHERE id = a_id;
    INSERT INTO transact(amount, account, card) VALUES(_amount, a_id, card_id);
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
  `id` int(10) UNSIGNED NOT NULL,
  `number` int(10) UNSIGNED DEFAULT NULL,
  `balance` int(11) NOT NULL,
  `type` tinyint(1) DEFAULT '0',
  `credit_limit` int(11) DEFAULT NULL,
  `owner` int(10) UNSIGNED NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Vedos taulusta `account`
--

INSERT INTO `account` (`id`, `number`, `balance`, `type`, `credit_limit`, `owner`) VALUES
(2, NULL, 3220, 0, 0, 1);

-- --------------------------------------------------------

--
-- Rakenne taululle `card`
--

CREATE TABLE `card` (
  `id` int(10) UNSIGNED NOT NULL,
  `number` int(10) UNSIGNED NOT NULL,
  `pin` int(10) UNSIGNED NOT NULL,
  `owner` int(10) UNSIGNED NOT NULL,
  `account` int(10) UNSIGNED DEFAULT NULL,
  `account2` int(10) UNSIGNED DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Vedos taulusta `card`
--

INSERT INTO `card` (`id`, `number`, `pin`, `owner`, `account`, `account2`) VALUES
(1, 123456, 1111, 0, 0, NULL),
(2, 112233, 1234, 0, 2, NULL);

-- --------------------------------------------------------

--
-- Rakenne taululle `transact`
--

CREATE TABLE `transact` (
  `id` int(10) UNSIGNED NOT NULL,
  `time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `amount` int(11) NOT NULL,
  `card` int(10) UNSIGNED NOT NULL,
  `account` int(10) UNSIGNED NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Vedos taulusta `transact`
--

INSERT INTO `transact` (`id`, `time`, `amount`, `card`, `account`) VALUES
(25, '2020-11-23 12:46:27', 20, 2, 2),
(26, '2020-11-23 12:46:52', -40, 2, 2),
(27, '2020-11-23 13:40:05', 566, 2, 2);

-- --------------------------------------------------------

--
-- Rakenne taululle `user`
--

CREATE TABLE `user` (
  `id` int(10) UNSIGNED NOT NULL,
  `first_name` varchar(64) NOT NULL,
  `last_name` varchar(64) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Vedos taulusta `user`
--

INSERT INTO `user` (`id`, `first_name`, `last_name`) VALUES
(1, 'Erkki', 'Pertti');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `account`
--
ALTER TABLE `account`
  ADD PRIMARY KEY (`id`),
  ADD KEY `owner` (`owner`);

--
-- Indexes for table `card`
--
ALTER TABLE `card`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `number` (`number`);

--
-- Indexes for table `transact`
--
ALTER TABLE `transact`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `account`
--
ALTER TABLE `account`
  MODIFY `id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `card`
--
ALTER TABLE `card`
  MODIFY `id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `transact`
--
ALTER TABLE `transact`
  MODIFY `id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=28;

--
-- AUTO_INCREMENT for table `user`
--
ALTER TABLE `user`
  MODIFY `id` int(10) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
