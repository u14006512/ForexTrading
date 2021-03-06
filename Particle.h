/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Particle.h
 * Author: Warmaster
 *
 * Created on 07 July 2017, 1:55 PM
 */
#include <array>
#include <vector>
#include <random>
#include <iostream>
#ifndef PARTICLE_H
#define PARTICLE_H

using namespace std;

class Particle
{
public:
    Particle();
    Particle(int s);

    void clearParameters();
    void setValueAtIndex(double value, int index);
    void copyNewVectorIntoVector(vector<double >newVector);
    double getValueAtIndex(int index);
    double getFitness();
    void setFitness(double f);


    virtual void initialiseParticle()=0;
    virtual void printSelf();
    double fitness;
    double personalBestFitness;



    vector<double> velocity;
    vector<double> parameters;

    /*
     * Needs to be updated after running the fitness trial. If the trial produces a better fitness, then update it
     * otherwise keep it as it
     * */
    vector<double> personalBest;

    void copyIntoPersonalBest(vector<double> pBest);
private:

};

#endif /* PARTICLE_H */

