// Copyright (c) 2022 Paterry Baptichon J All rights reserved.
//
// Created by Paterry Baptichon
// Created on 2022-05-01

// This program can show the user the rgb values

#include <iostream>
#include <string>

int main()  {
    // this function can print rgb values

    int counter1;
    int counter2;
    int counter3;

    std::cout << "This program can print out RGB values" << "\n" << std::endl;



    // process and output
    for (counter1 = 253; counter1 < 256; counter1++) {
            for (counter2 = 253; counter2 < 256; counter2++) {
                for (counter3 = 0; counter3 < 256; counter3++) {
                    std::cout << "RGB(" << counter1 << "," << counter2 << ","
                              << counter3 << ")" << std::endl;
                }
            }
        }
}
