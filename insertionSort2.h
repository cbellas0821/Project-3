#pragma once
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// This performs an insertionSort as a helper function for the shellSort algorithm
// This is NOT one of the two sorts being compared for Project 3
// This code was referenced from OpenDSA Chapter 13.8 and was modified to fit vector uses
vector<pair<string, float>> insertionSort2(vector<pair<string, float>> sortList, int start, int inc, int n)
{
    pair<string,float> temp;
    
    for(int i = start + inc; i < n; i += inc)
    {
        
        for (int j = i; ((j >= inc) && (sortList[j].second < sortList[j - inc].second)); j -= inc)
        {
            //Swap 
            temp = sortList[j];
            sortList[j] = sortList[j-inc];
            sortList[j-inc] = temp;
        }
    }
    
    return sortList;
}