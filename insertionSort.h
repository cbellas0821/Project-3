#pragma once
#include <vector>
#include <string>
#include <functional>
#include "food.h"
using namespace std;

// This performs an insertionSort as a helper function for the bucketSort algorithm
// This is NOT one of the two sorts being compared for Project 3
void insertionSort(vector<Food>& list,function<float(const Food&)> selector )
{
    Food key;
    int j = 0;

    // This code is taken from Sorting Slides in Class
    for(int i = 1; i < list.size(); i++)
    {
        key = list[i];
        j = i - 1;

        // Compare key with each value in sorted until smaller value is found
        while(selector(key) <  selector(list[j] )&& j >= 0)
        {
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = key;
    }

    //return list;
}