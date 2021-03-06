//
// Created by Warmaster on 2017/07/10.
//

#ifndef TRADINGAGENT_H
#define TRADINGAGENT_H
#include <cmath>
#include <iostream>
#include <string>
#include "TransactionHistory.h"
#include <vector>

using namespace std;

class TradingAgent {
private:

public:
    TradingAgent(string buyCurrency,string boughtCurrency, double buyCurr, double boughtCurr);
    ~TradingAgent();

    vector<TransactionHistory *> transactionList;

    string currencyUsedForBuying;
    string currencyThatIsBought;
    double initialStartingCapital;
    double buyingCurrency;
    double boughtCurrency;
    double profit;
    double loss;
    double profitRatio;
    double lossRatio;


    string getBuyingCurrency();
    string getBoughtCurrency();

    void setBuyingCurrency(string a);
    void setBoughtCurrency(string a);

    void recordTransaction(string curr, double price, int traded, int vol, int type);
    void conductTransaction(double buySignal,double sellSignal,vector<double> stratParameters,double bid,double ask);
    void calculatePerformanceMetrics();

    void resetTradingAgent();
};


#endif //TRADINGAGENT_H
