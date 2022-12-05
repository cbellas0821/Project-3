#pragma once
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// This performs an insertionSort as a helper function for the shellSort algorithm
// This is NOT one of the two sorts being compared for Project 3
// This code was referenced from OpenDSA Chapter 13.8 and was modified to fit vector uses
void insertionSort2(vector<Food>& list,function<float(const Food&)> selector , int start, int inc, int n) {

    Food temp;
    for (int i = start + inc; i < n; i += inc) {

        for (int j = i; ((j >= inc) && selector(list[j]) < selector(list[j - inc])); j -= inc) {
            //Swap
            temp =(list[j]);
            (list[j]) = (list[j - inc]);
            list[j - inc] = temp;
        }
    }
}