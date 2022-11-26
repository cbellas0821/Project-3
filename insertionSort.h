#pragma once
#include <vector>
#include <string>
using namespace std;

// This performs an insertionSort as a helper function for the bucketSort algorithm
// This is NOT one of the two sorts being compared for Project 3
vector<pair<string, float>> insertionSort(vector<pair<string, float>> sortList)
{
    
    pair<string,float> key;
    int j = 0;

    // This code is taken from Sorting Slides in Class
    for(int i = 1; i < sortList.size(); i++)
    {
        key = sortList[i];
        j = i - 1;

        // Compare key with each value in sorted until smaller value is found
        while(key.second < sortList[j].second && j >= 0)
        {
            sortList[j+1] = sortList[j];
            j--;
        }

        sortList[j+1] = key;
    }

    return sortList;
}