
#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <vector>
#include "food.h"
#include "processData.h"
#include "bucketSort.h"
#include "shellSort.h"




using namespace std;

int main()
{

    vector<Food> tempList;
    int numFoodObj = 0;
    string line;
    fstream foodFile("/Users/agustingiraldo/GroupProject3/food.csv", ios::in);


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

    string attribute = "protein";

    bucketSort(tempList,attribute);//add string of a
    //shellSort(tempList,attribute);

    // Run sorting algorithms
    for(int i =0; i < tempList.size() ;i++){
        cout <<tempList[i].Get_Description() <<tempList[i].Get_protein() << endl;
    }


}
