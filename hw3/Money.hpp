//  @Author
//  Created by Umut Cem Avin on 14.05.2018.
//  Student ID : 150140018
//  Copyright © 2018 avin. All rights reserved.

#ifndef Money_hpp
#define Money_hpp

#include <iostream>

//Money class definition
class Money{
public:
    Money();
    Money(int l, int k);
    double operator+(double total) const;
private:
    int lira;
    int kurus;
    double getAmount() const;
};


#endif /* Money_hpp */
