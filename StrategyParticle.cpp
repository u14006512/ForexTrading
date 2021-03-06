/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StrategyParticle.cpp
 * Author: Warmaster
 * 
 * Created on 07 July 2017, 1:56 PM
 */

#include "StrategyParticle.h"

StrategyParticle::StrategyParticle(int s) {
    parameters.resize(s);
    fitness=0.0;
    personalBest.resize(s);
}

void StrategyParticle::initialiseParticle()
{
    double lower_bound = 0.3;
    double upper_bound = 1;
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution<> dist(lower_bound, upper_bound);
    velocity.resize(2);
    for(int i=0;i<velocity.size();i++)
    {
        velocity.at(i)=0.0;
    }
    for (int i = 0; i < 2; i++) {
        parameters.at(i) =dist(e2);;
    }
}

void StrategyParticle::printSelf()
{
    cout<<"Strategy Particle Printing"<<endl;
    cout<<"============================================================="<<endl;
    for (int i=0;i<parameters.size();i++)
    {
        cout<<"Parameter "<<i<<": "<<to_string(parameters.at(i))<<endl;
    }
    cout<<"============================================================="<<endl;

}
