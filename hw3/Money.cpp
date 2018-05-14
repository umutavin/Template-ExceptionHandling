//  @Author
//  Created by Umut Cem Avin on 14.05.2018.
//  Student ID : 150140018
//  Copyright © 2018 avin. All rights reserved.

#include "Money.hpp"
using namespace std;

//Default Constructor
Money::Money(){
    lira = 0;
    kurus = 0;
}

//Constructor
Money::Money(int l , int k ){
    
    /*
     With this exception handling, before a money object is constructed
     the program checks if the money amount is below zero. By doing this,
     undesirable inputs is checked in runtime and user takes an error mesage
     which shows the wrong input.
     */
    try{
        lira = l;
        kurus = k;
        if(getAmount()<0){
            double temp = -1*((-1*lira) + static_cast<double>(kurus)/100);
            throw temp;
        }
    }catch(double money) {
        cout << "The amount of money can not be below zero! Error: " << money << endl;
    }
}

//A function that returns lira and kurus amounts together.
double Money::getAmount() const{
    double totalAmount = lira + static_cast<double>(kurus)/100;
    return totalAmount;
}

//Addition operation by using operator overloading.
double Money::operator+(double total) const {
    return total + getAmount();
}
