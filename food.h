#pragma once
#include <string>
using namespace std;

class Food
{
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
    float Get_foodID() const;
    float Get_alphaCarotene() const;
    float Get_betaCarotene() const;
    float Get_betaCryptoxanthin() const;
    float Get_carbohydrate() const;
    float Get_cholesterol() const;
    float Get_choline() const;
    float Get_fiber() const;
    float Get_luteinZeaxanthin() const;
    float Get_lycopene() const;
    float Get_niacin() const;
    float Get_protein() const;
    float Get_retinol() const;
    float Get_riboflavin() const;
    float Get_totalSugar() const;
    float Get_thiamin() const;
    float Get_water() const;
    float Get_monoFat() const;
    float Get_polyfat() const;
    float Get_satFat() const;
    float Get_lipidTotal() const;
    float Get_calcium() const;
    float Get_copper() const;
    float Get_iron() const;
    float Get_magnesium() const;
    float Get_phosphorus() const;
    float Get_potassium() const;
    float Get_sodium() const;
    float Get_zinc() const;
    float Get_vitA() const;
    float Get_b12() const;
    float Get_b6() const;
    float Get_vitC() const;
    float Get_vitE() const;
    float Get_vitK() const;



};


// Default constructor initializes all values as empty or 0
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

// Food constructor to read and store data from food.csv
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

float Food::Get_foodID() const {
    return foodID;
}
float Food::Get_alphaCarotene() const {
    return alphaCarotene;
}
float Food::Get_betaCarotene() const {
    return betaCarotene;
}
float Food::Get_betaCryptoxanthin() const {
    return betaCryptoxanthin;
}
float Food::Get_carbohydrate() const {
    return carbohydrate;
}
float Food::Get_cholesterol() const {
    return cholesterol;
}
float Food::Get_choline() const {
    return choline;
}
float Food::Get_fiber() const {
    return fiber;
}
float Food::Get_luteinZeaxanthin() const {
    return luteinZeaxanthin;
}
float Food::Get_lycopene() const {
    return lycopene;
}
float Food::Get_niacin() const {
    return niacin;
}
float Food::Get_protein() const {
    return protein;
}
float Food::Get_retinol() const {
    return retinol;
}
float Food::Get_riboflavin() const {
    return riboflavin;
}
float Food::Get_totalSugar() const {
    return totalSugar;
}
float Food::Get_thiamin() const {
    return thiamin;
}
float Food::Get_water() const {
    return water;
}
float Food::Get_monoFat() const {
    return monoFat;
}
float Food::Get_polyfat() const {
    return polyfat;
}
float Food::Get_satFat() const {
    return satFat;
}
float Food::Get_lipidTotal() const {
    return lipidTotal;
}
float Food::Get_calcium() const {
    return calcium;
}
float Food::Get_copper() const {
    return copper;
}
float Food::Get_iron() const {
    return iron;
}
float Food::Get_magnesium() const {
    return magnesium;
}
float Food::Get_phosphorus() const {
    return phosphorus;
}
float Food::Get_potassium() const {
    return potassium;
}
float Food::Get_sodium() const {
    return sodium;
}
float Food::Get_zinc() const {
    return zinc;
}
float Food::Get_vitA() const {
    return vitA;
}
float Food::Get_b12() const {
    return b12;
}
float Food::Get_b6() const {
    return b6;
}
float Food::Get_vitC() const {
    return vitC;
}
float Food::Get_vitK() const {
    return vitK;
}
float Food::Get_vitE() const {
    return vitE;
}


//#pragma once
//#include <string>
//using namespace std;
//
//class Food
//{
//private:
//public:
//    // These variables/functions will be made private after testing
//    
//    string category;
//    string description;
//    int foodID;
//    int alphaCarotene;
//    int betaCarotene;
//    int betaCryptoxanthin;
//    float carbohydrate;
//    int cholesterol;
//    float choline;
//    float fiber;
//    int luteinZeaxanthin;
//    int lycopene;
//    float niacin;
//    float protein;
//    int retinol;
//    float riboflavin;
//    float totalSugar;
//    float thiamin;
//    float water;
//    float monoFat;
//    float polyfat;
//    float satFat;
//    float lipidTotal;
//    int calcium;
//    float copper;
//    float iron;
//    int magnesium;
//    int phosphorus;
//    int potassium;
//    int sodium;
//    float zinc;
//    int vitA;
//    float b12;
//    float b6;
//    float vitC;
//    float vitE;
//    float vitK;
//
//    // These variables/functions will stay public after testing
//    Food();
//    Food(string Category, string Description, int FoodID, int AlphaCarotene, int BetaCarotene, int BetaCryptoxanthin,
//         float Carbohydrate, int Cholesterol, float Choline, float Fiber, int LuteinZeaxanthin, int Lycopene, float Niacin,
//         float Protein, int Retinol, float Riboflavin, float TotalSugar, float Thiamin, float Water, float MonoFat, float Polyfat,
//         float SatFat, float LipidTotal, int Calcium, float Copper, float Iron, int Magnesium, int Phosphorus, int Potassium, int Sodium,
//         float Zinc, int VitA, float B12, float B6, float VitC, float VitE, float VitK);
//};
//
//// Default constructor initializes all values as empty or 0
//Food::Food()
//{
//    category = "";
//    description = "";
//    foodID = 0;
//    alphaCarotene = 0;
//    betaCarotene = 0;
//    betaCryptoxanthin = 0;
//    carbohydrate = 0.0;
//    cholesterol = 0;
//    choline = 0.0;
//    fiber = 0.0;
//    luteinZeaxanthin = 0;
//    lycopene = 0;
//    niacin = 0.0;
//    protein = 0.0;
//    retinol = 0;
//    riboflavin = 0.0;
//    totalSugar = 0.0;
//    thiamin = 0.0;
//    water = 0.0;
//    monoFat = 0.0;
//    polyfat = 0.0;
//    satFat = 0.0;
//    lipidTotal = 0.0;
//    calcium = 0;
//    copper = 0.0;
//    iron = 0.0;
//    magnesium = 0;
//    phosphorus = 0;
//    potassium = 0;
//    sodium = 0;
//    zinc = 0.0;
//    vitA = 0;
//    b12 = 0.0;
//    b6 = 0.0;
//    vitC = 0.0;
//    vitE = 0.0;
//    vitK = 0.0;
//}
//
//// Food constructor to read and store data from food.csv
//Food::Food(string Category, string Description, int FoodID, int AlphaCarotene, int BetaCarotene, int BetaCryptoxanthin,
//           float Carbohydrate, int Cholesterol, float Choline, float Fiber, int LuteinZeaxanthin, int Lycopene, float Niacin,
//           float Protein, int Retinol, float Riboflavin, float TotalSugar, float Thiamin, float Water, float MonoFat, float Polyfat,
//           float SatFat, float LipidTotal, int Calcium, float Copper, float Iron, int Magnesium, int Phosphorus, int Potassium, int Sodium,
//           float Zinc, int VitA, float B12, float B6, float VitC, float VitE, float VitK)
//{
//    category = Category;
//    description = Description;
//    foodID = FoodID;
//    alphaCarotene = AlphaCarotene;
//    betaCarotene = BetaCarotene;
//    betaCryptoxanthin = BetaCryptoxanthin;
//    carbohydrate = Carbohydrate;
//    cholesterol = Cholesterol;
//    choline = Choline;
//    fiber = Fiber;
//    luteinZeaxanthin = LuteinZeaxanthin;
//    lycopene = Lycopene;
//    niacin = Niacin;
//    protein = Protein;
//    retinol = Retinol;
//    riboflavin = Riboflavin;
//    totalSugar = TotalSugar;
//    thiamin = Thiamin;
//    water = Water;
//    monoFat = MonoFat;
//    polyfat = Polyfat;
//    satFat = SatFat;
//    lipidTotal = LipidTotal;
//    calcium = Calcium;
//    copper = Copper;
//    iron = Iron;
//    magnesium = Magnesium;
//    phosphorus = Phosphorus;
//    potassium = Potassium;
//    sodium = Sodium;
//    zinc = Zinc;
//    vitA = VitA;
//    b12 = B12;
//    b6 = B6;
//    vitC = VitC;
//    vitE = VitE;
//    vitK = VitK;
//}