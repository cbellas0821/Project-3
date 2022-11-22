#pragma once
#include <string>
using namespace std;

class Food
{
private:
public:
    // These variables/functions will be made private after testing
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

    // These variables/functions will stay public after testing
    Food();
    Food(string Category, string Description, int FoodID, int AlphaCarotene, int BetaCarotene, int BetaCryptoxanthin,
         float Carbohydrate, int Cholesterol, float Choline, float Fiber, int LuteinZeaxanthin, int Lycopene, float Niacin,
         float Protein, int Retinol, float Riboflavin, float TotalSugar, float Thiamin, float Water, float MonoFat, float Polyfat,
         float SatFat, float LipidTotal, int Calcium, float Copper, float Iron, int Magnesium, int Phosphorus, int Potassium, int Sodium,
         float Zinc, int VitA, float B12, float B6, float VitC, float VitE, float VitK);
};

// Default constructor initiaalizes all values as empty or 0
Food::Food()
{
    category = "";
    description = "";
    foodID = 0;
    alphaCarotene = 0;
    betaCarotene = 0;
    betaCryptoxanthin = 0;
    carbohydrate = 0.0;
    cholesterol = 0;
    choline = 0.0;
    fiber = 0.0;
    luteinZeaxanthin = 0;
    lycopene = 0;
    niacin = 0.0;
    protein = 0.0;
    retinol = 0;
    riboflavin = 0.0;
    totalSugar = 0.0;
    thiamin = 0.0;
    water = 0.0;
    monoFat = 0.0;
    polyfat = 0.0;
    satFat = 0.0;
    lipidTotal = 0.0;
    calcium = 0;
    copper = 0.0;
    iron = 0.0;
    magnesium = 0;
    phosphorus = 0;
    potassium = 0;
    sodium = 0;
    zinc = 0.0;
    vitA = 0;
    b12 = 0.0;
    b6 = 0.0;
    vitC = 0.0;
    vitE = 0.0;
    vitK = 0.0;
}

Food::Food(string Category, string Description, int FoodID, int AlphaCarotene, int BetaCarotene, int BetaCryptoxanthin,
           float Carbohydrate, int Cholesterol, float Choline, float Fiber, int LuteinZeaxanthin, int Lycopene, float Niacin,
           float Protein, int Retinol, float Riboflavin, float TotalSugar, float Thiamin, float Water, float MonoFat, float Polyfat,
           float SatFat, float LipidTotal, int Calcium, float Copper, float Iron, int Magnesium, int Phosphorus, int Potassium, int Sodium,
           float Zinc, int VitA, float B12, float B6, float VitC, float VitE, float VitK)
{
    category = Category;
    description = Description;
    foodID = FoodID;
    alphaCarotene = AlphaCarotene;
    betaCarotene = BetaCarotene;
    betaCryptoxanthin = BetaCryptoxanthin;
    carbohydrate = Carbohydrate;
    cholesterol = Cholesterol;
    choline = Choline;
    fiber = Fiber;
    luteinZeaxanthin = LuteinZeaxanthin;
    lycopene = Lycopene;
    niacin = Niacin;
    protein = Protein;
    retinol = Retinol;
    riboflavin = Riboflavin;
    totalSugar = TotalSugar;
    thiamin = Thiamin;
    water = Water;
    monoFat = MonoFat;
    polyfat = Polyfat;
    satFat = SatFat;
    lipidTotal = LipidTotal;
    calcium = Calcium;
    copper = Copper;
    iron = Iron;
    magnesium = Magnesium;
    phosphorus = Phosphorus;
    potassium = Potassium;
    sodium = Sodium;
    zinc = Zinc;
    vitA = VitA;
    b12 = B12;
    b6 = B6;
    vitC = VitC;
    vitE = VitE;
    vitK = VitK;
}