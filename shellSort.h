#pragma once
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include "insertionSort2.h"
using namespace std;

// This function performs a shellSort as one of the two sorts to be compared
vector<pair<string, float>> shellSort(vector<pair<string, float>> sortList)
{
    int n = sortList.size();

    //OpenDSA book was referenced for this code (Chapter 13.8) and was modified to fit vector uses
    //Increment gap size
    for(int i = n/2; i > 2; i /=2)  
    {
        //Sort the sublists
        for(int j = 0; j < i; j++)
        {
            sortList = insertionSort2(sortList, j, i, n);
        }
    }
     sortList = insertionSort2(sortList, 0, 1, n);

    return sortList;
}