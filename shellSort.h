#pragma once
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include "insertionSort2.h"
using namespace std;

// This function performs a shellSort as one of the two sorts to be compared
void shellSort(vector<Food>&foods, string attribute)
{

    int n = foods.size();
    function<float(const Food&)> selector;


    if(attribute == "foodID"){
        selector = &Food::Get_foodID;//change to desired attribute
    }
    if(attribute == "alphaCarotene"){
        selector = &Food::Get_alphaCarotene;//change to desired attribute
    }
    if(attribute == "betaCarotene"){
        selector = &Food::Get_betaCarotene;//change to desired attribute
    }
    if(attribute == "betaCryptoxanthin"){
        selector = &Food::Get_betaCryptoxanthin;//change to desired attribute
    }
    if(attribute == "carbohydrate"){
        selector = &Food::Get_carbohydrate;//change to desired attribute
    }
    if(attribute == "cholesterol"){
        selector = &Food::Get_cholesterol;//change to desired attribute
    }
    if(attribute == "choline"){
        selector = &Food::Get_choline;//change to desired attribute
    }
    if(attribute == "fiber"){
        selector = &Food::Get_fiber;//change to desired attribute
    }
    if(attribute == "luteinZeaxanthin"){
        selector = &Food::Get_luteinZeaxanthin;//change to desired attribute
    }
    if(attribute == "lycopene"){
        selector = &Food::Get_lycopene;//change to desired attribute
    }
    if(attribute == "niacin"){
        selector = &Food::Get_niacin;//change to desired attribute
    }
    if(attribute == "protein"){
        selector = &Food::Get_protein;//change to desired attribute
    }
    if(attribute == "retinol"){
        selector = &Food::Get_retinol;//change to desired attribute
    }
    if(attribute == "riboflavin"){
        selector = &Food::Get_riboflavin;//change to desired attribute
    }
    if(attribute == "totalSugar"){
        selector = &Food::Get_totalSugar;//change to desired attribute
    }
    if(attribute == "thiamin"){
        selector = &Food::Get_thiamin;//change to desired attribute
    }
    if(attribute == "water"){
        selector = &Food::Get_water;//change to desired attribute
    }
    if(attribute == "monoFat"){
        selector = &Food::Get_monoFat;//change to desired attribute
    }
    if(attribute == "polyfat"){
        selector = &Food::Get_polyfat;//change to desired attribute
    }
    if(attribute == "satFat"){
        selector = &Food::Get_satFat;//change to desired attribute
    }
    if(attribute == "lipidTotal"){
        selector = &Food::Get_lipidTotal;//change to desired attribute
    }
    if(attribute == "calcium"){
        selector = &Food::Get_calcium;//change to desired attribute
    }
    if(attribute == "copper"){
        selector = &Food::Get_copper;//change to desired attribute
    }
    if(attribute == "iron"){
        selector = &Food::Get_iron;//change to desired attribute
    }
    if(attribute == "magnesium"){
        selector = &Food::Get_magnesium;//change to desired attribute
    }
    if(attribute == "phosphorus"){
        selector = &Food::Get_phosphorus;//change to desired attribute
    }
    if(attribute == "potassium"){
        selector = &Food::Get_potassium;//change to desired attribute
    }
    if(attribute == "sodium"){
        selector = &Food::Get_sodium;//change to desired attribute
    }
    if(attribute == "zinc"){
        selector = &Food::Get_zinc;//change to desired attribute
    }
    if(attribute == "vitA"){
        selector = &Food::Get_vitA;//change to desired attribute
    }
    if(attribute == "b12"){
        selector = &Food::Get_b12;//change to desired attribute
    }
    if(attribute == "b6"){
        selector = &Food::Get_b6;//change to desired attribute
    }
    if(attribute == "vitC"){
        selector = &Food::Get_vitC;//change to desired attribute
    }
    if(attribute == "vitE"){
        selector = &Food::Get_vitE;//change to desired attribute
    }
    if(attribute == "vitK"){
        selector = &Food::Get_vitK;//change to desired attribute
    }

    //OpenDSA book was referenced for this code (Chapter 13.8) and was modified to fit vector uses
    //Increment gap size
    for(int i = n/2; i > 2; i /=2)
    {
        //Sort the sublists
        for(int j = 0; j < i; j++)
        {
         insertionSort2(foods,selector, j, i, n);
        }
    }
   insertionSort2(foods,selector, 0, 1, n);

}