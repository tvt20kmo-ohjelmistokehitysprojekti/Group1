#ifndef SETTINGS_H
#define SETTINGS_H

// Numeroarvot olioille sivunvaihtoa varten

enum Page {
    loginPage       = 0,
    menuPage        = 1,
    saldoPage       = 2,
    withdrawPage    = 3,
    transactPage    = 4,
    payCreditPage   = 5,
    infoPage        = 6
};

// Numeroarvot pankkikortin eri tyypeille

enum Account {
    Debit           = 0,
    Credit          = 1,
    DebitCredit     = 2
};

#endif // SETTINGS_H
