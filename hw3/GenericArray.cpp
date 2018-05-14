//  @Author
//  Created by Umut Cem Avin on 14.05.2018.
//  Student ID : 150140018
//  Copyright © 2018 avin. All rights reserved.

#include "GenericArray.hpp"

//Default Constructor
template<class Type>
GenericArray<Type>::GenericArray()
{
}

//Constructor
template<class Type>
GenericArray<Type>::GenericArray(int size)
{
    elements = new Type[size];
    arraySize = size;
}

//Destructor
template<class Type>
GenericArray<Type>::~GenericArray()
{
    delete [] elements ;
}

/*A function which helps to assignment operation during process of
adding elements*/
template <class Type>
Type& GenericArray<Type>::operator[](int i) {
    return *(elements+i);
}

//A function that performs addition operations between the elements
template<class Type>
double GenericArray<Type>::sum()
{
    double total = 0;
    for(int i=0; i<arraySize; i++){
        total = elements[i] + total;
    }
    return total;
}


