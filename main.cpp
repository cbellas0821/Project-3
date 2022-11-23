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
#include "foodMap.h"
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
            // Insert food Object into a vector until the user decides what information they want displayed (maps have key value pairs => key is food string, value is assoicated w/chosen nutrient)
            // Or would it be easier to get what the user wants then process the data?
        }
        
    }
    else
        cout << "Cannot Open File" << endl;


    // Once all data has been processed and added to vecotr, provide user option between nutrient importance & BFS v. DFS
    // Insert all items into ordered map 


}
