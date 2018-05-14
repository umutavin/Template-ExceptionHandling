//  @Author
//  Created by Umut Cem Avin on 14.05.2018.
//  Student ID : 150140018
//  Copyright © 2018 avin. All rights reserved.

#ifndef GenericArray_hpp
#define GenericArray_hpp

#include <iostream>

//GenericArray class(template) definition
template <class Type>
class GenericArray{
public:
    GenericArray();
    GenericArray(int size);
    ~GenericArray();
    Type* elements;
    double sum();
    double total;
private:
    int arraySize;
    Type& operator[](int i);
};

#endif /* GenericArray_hpp */
