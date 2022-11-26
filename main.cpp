//  Team Name: Binary Beasts
/*  Team Members:
    Chloe Bellas
    Jesse Landis
    Agustin Giraldo
*/
//  Project Title: SmartEats
/*  Description: TBD
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <vector>
#include "food.h"
#include "processData.h"
#include "bucketSort.h"

int main()
{

    vector<Food> tempList;
    int numFoodObj = 0;
    string line;
    fstream foodFile("food.csv", ios::in);
    

    if(foodFile.is_open())
    {
        // Remove the labels from the processed data
        getline(foodFile, line);
        while(getline(foodFile, line))
        {

            // Parsed data is all added to the list for later use
            tempList.push_back(processData(line));
    
        }
        
    }
    else
        cout << "Cannot Open File" << endl;


    // Once all data has been processed and added to list, provide user option between nutrient importance & BFS v. DFS
    // Saturated Fat as an example

    vector<pair<string, float>> sortList;
    vector<Food>::iterator it;

    for(it = tempList.begin(); it != tempList.end(); it++)
    {
        sortList.push_back(make_pair(it->description, it->satFat));
    }

    sortList = bucketSort(sortList);
    // Run sorting algorithms

}
