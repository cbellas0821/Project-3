#pragma once
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include "insertionSort.h"
using namespace std;

// This function performs a bucketSort as one of the two sorts to be compared
vector<pair<string,float>> bucketSort(vector<pair<string,float>> sortList)
{
    // Vector to contain final sorted list
    vector<pair<string, float>> listSorted;

    // Make number of buckets in the vector proportional to size of the input vector
    int numBuckets = sqrt(sortList.size());
    int currIndex = 0;
    
    // Use a map for the buckets, where the keys correspond to the bucket number
    map<int, vector<pair<string, float>>> buckets;
    vector<pair<string,float>>::iterator it;

    for(it = sortList.begin(); it != sortList.end(); it++)
    {
        //Insert vector element into map index at vector element*numBuckets
        currIndex = it->second * numBuckets;
        buckets[currIndex].push_back(make_pair(it->first,it->second));
    }

    //Sort buckets using insertion sort and concatenate list
    for(int i = 0; i < buckets.size(); i++)
    {
        buckets[i] = insertionSort(buckets[i]);
        listSorted.insert(listSorted.end(), buckets[i].begin(), buckets[i].end());
    }

    return listSorted;
}