//
//  main.cpp
//  test1
//
//  Created by Kokum Weeratunga on 26/6/18.
//  Copyright © 2018 Kokum Weeratunga. All rights reserved.
//

#include <iostream>
#include <cmath>

struct person
{
    char name[20];
    int age;
    
};



int main()
{
    using namespace std;
    
    person greg  = {"greg",21};
    
    
    //system("pause");
    
    std::cout << greg.age;
    return 0;
}
