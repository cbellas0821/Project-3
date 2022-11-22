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
#include <vector>
#include "food.h"
#include "processData.h"

int main()
{

    int numFoodObj = 0;
    string line;
    fstream foodFile("food.csv", ios::in);
    

    if(foodFile.is_open())
    {
        // Remove the labels from the processed data
        getline(foodFile, line);
        while(getline(foodFile, line))
        {

            // Call processData here and assign to a food object
            // Insert food Object into ordered map
            
        }
        
    }
    else
        cout << "Cannot Open File" << endl;

   // Once all data has been processed and added to ordered map, provide user option between nutrient importance & BFS v. DFS


}
