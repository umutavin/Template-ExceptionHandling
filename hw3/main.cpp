//  @Author
//  Created by Umut Cem Avin on 14.05.2018.
//  Student ID : 150140018
//  Copyright © 2018 avin. All rights reserved.

#include <iostream>
#include <string.h>
#include "Money.cpp"
#include "GenericArray.cpp"

using namespace std;

int main() {
    GenericArray<int>m1(5);
    GenericArray<double>m2(5);
    GenericArray<Money>m3(5);
    
    Money d(-1,89);
    Money a(10,5);
    Money b(10,5);
    Money c(43,7);
    Money k(50,6);
    Money m(10,20);
    Money bonus(5,0);
    
    m3.elements[0] = a;
    m3.elements[1] = b;
    m3.elements[2] = c;
    m3.elements[3] = k;
    m3.elements[4] = m;
        

    m2.elements[0] = 12.5;
    m2.elements[1] = 11.6;
    m2.elements[2] = 13.9;
    m2.elements[3] = 23.7;
    m2.elements[4] = 130.7;

    m1.elements[0] = 1;
    m1.elements[1] = 2;
    m1.elements[2] = 5;
    m1.elements[3] = 9;
    m1.elements[4] = 90;
    
    m3.total = m3.sum();
    m2.total = m2.sum();
    m1.total = m1.sum();
    
    /*
     Conditional statements that check if the arrays' total amounts is more
     than 100 or not. If total amount is more than 100TL, then it gives 5TL
     bonus. If it's less than 100TL it punishes 5TL and prints the outputs
     according to these conditions.
     */
    cout << "Your total amount for money objects array " << m3.total << endl;
    
    if (m3.total > 100){
        cout << "You have won 5 tl bonus, your new amount is " <<
        m3.total + 5 << endl;
    }
    
    else if (m3.total < 100){
        cout << "You have got 5 tl punishment, your new amount is " <<
        m3.total - 5 << endl;
    }
        
    cout << endl;
    
    cout << "The total of integer array is " << m1.total << endl;
    if (m1.total > 100){
        cout << "You have won 5 tl bonus, your new amount is " <<
        m1.total + 5 << endl;
    }
    
    else if (m1.total < 100){
        cout << "You have got 5 tl punishment, your new amount is " <<
        m1.total - 5 << endl;
    }
    
    cout << endl;
    
    cout << "The total of double array is " << m2.total << endl;
    if (m2.total > 100){
        cout << "You have won 5 tl bonus, your new amount is " <<
        m2.total + 5 << endl;
    }
    
    else if (m2.total < 100){
        cout << "You have got 5 tl punishment, your new amount is " <<
        m2.total - 5 << endl;
    }

    return 0;
}
