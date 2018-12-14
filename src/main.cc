//
// Created by luis_ on 12/10/2018.
//
#include <iostream>
#include<vector>
#include "windchillindex.h"
#include <cmath>

using std:: cout;
using std:: cin;
using std:: endl;
using edu::vcccd::vc::csv13::computeWindChillIndex;


double w (double v, double T);
double v(double v);
double t (double t);


int main() {

    double w ;
    double v ;
    double t ;
    char response;

    cout<<"Enter the wind speed in meters per second :\n";
    cin >> v;


    cout << "Enter the temperature in Degree Celcius:\n";
    cin >> t;

    double index = edu::vcccd::vc::csv13::computeWindChillIndex(v,t);
    cout <<"This is the wind chill in your area"<<index<<endl;



    return 0;

}
