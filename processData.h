// Description: This function will read and process a singular line of food data and return a Food Object
#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include "food.h"

Food processData(string line)
{

    // Keeps track of column
    int n = 0;
    string word;

    // Food Class Parameters
    string category;
    string description;
    int foodID;
    int alphaCarotene;
    int betaCarotene;
    int betaCryptoxanthin;
    float carbohydrate;
    int cholesterol;
    float choline;
    float fiber;
    int luteinZeaxanthin;
    int lycopene;
    float niacin;
    float protein;
    int retinol;
    float riboflavin;
    float totalSugar;
    float thiamin;
    float water;
    float monoFat;
    float polyfat;
    float satFat;
    float lipidTotal;
    int calcium;
    float copper;
    float iron;
    int magnesium;
    int phosphorus;
    int potassium;
    int sodium;
    float zinc;
    int vitA;
    float b12;
    float b6;
    float vitC;
    float vitE;
    float vitK;
    stringstream str(line);

    // Parses Category and Description (category may need additional parsing depending on use)
    getline(str, category, ',');
    getline(str, word, '"');
    getline(str,description,'"');
    getline(str, word, ',');

    while(getline(str, word, '"'))
    {

        getline(str, word, '"');

        // Catches if data is formatted in table incorrectly
        try
        {
            stoi(word);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            continue;
        }

        // Assigns data accordingly
        if (n == 0)
            foodID = stoi(word);
        else if(n == 1)
            alphaCarotene = stoi(word);
        else if (n == 2)
            betaCarotene = stoi(word);
        else if(n == 3)
            betaCryptoxanthin = stoi(word);
        else if (n == 4)
            carbohydrate = stof(word);
        else if(n == 5)
            cholesterol = stoi(word);
        else if (n == 6)
            choline = stof(word);
        else if (n == 7)
            fiber = stof(word);
        else if (n == 8)
            luteinZeaxanthin = stoi(word);
        else if (n == 9)
            lycopene = stoi(word);
        else if (n == 10)
            niacin = stof(word);
        else if (n == 11)
            protein = stof(word);
        else if (n == 12)
            retinol = stoi(word);
        else if (n == 13)
            riboflavin = stof(word);
        else if (n == 14)
            totalSugar = stof(word);
        else if (n == 15)
            thiamin = stof(word);
        else if (n == 16)
            water = stof(word);
        else if (n == 17)
            monoFat = stof(word);
        else if (n == 18)
            polyfat = stof(word);
        else if (n == 19)
            satFat = stof(word);
        else if (n == 20)
            lipidTotal = stof(word);
        else if (n == 21)
            calcium = stoi(word);
        else if (n == 22)
            copper = stof(word);
        else if (n == 23)
            iron = stof(word);
        else if (n == 24)
            magnesium = stoi(word);
        else if (n == 25)
            phosphorus = stoi(word);
        else if (n == 26)
            potassium = stoi(word);
        else if (n == 27)
            sodium = stoi(word);
        else if (n == 28)
            zinc = stof(word);
        else if (n == 29)
            vitA = stoi(word);
        else if (n == 30)
            b12 = stof(word);
        else if (n == 31)
            b6 = stof(word);
        else if (n == 32)
            vitC = stof(word);
        else if (n == 33)
            vitE = stof(word);
        else if (n == 34)
            vitK = stof(word);

        getline(str, word, ',');

        ++n;
    }

    //Creates a food object from parsed data
    Food newFood(category, description, foodID, alphaCarotene, betaCarotene,
                 betaCryptoxanthin, carbohydrate, cholesterol,  choline, fiber,
                 luteinZeaxanthin,  lycopene,  niacin,  protein, retinol,  riboflavin,
                 totalSugar,thiamin, water,  monoFat,  polyfat, satFat,
                 lipidTotal, calcium, copper,  iron,  magnesium,  phosphorus,potassium,
                 sodium, zinc, vitA, b12,  b6,  vitC,  vitE, vitK);

    return newFood;
}




