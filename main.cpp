//
//  main.cpp
//  Problem 1
//
//  Created by Simone Cimolato on 27/12/16.
//  Copyright © 2016 Simone Cimolato. All rights reserved.
//

#include <iostream>
using namespace std;

const int target = 1000;

int main(int argc, const char * argv[]) {
    int res;
    int sum;
    
    //multiples of 3
    for (int i = 1; 3 * i <= target; i++) {
        res = 3 * i;
        sum += res;
    }
    res = 0;
    //multiples of 5
    for (int j = 1; 5 * j <= target; j++) {
        res = 5 * j;
        sum += res;
    }
    cout<<sum<<endl;
    return 0;
}
