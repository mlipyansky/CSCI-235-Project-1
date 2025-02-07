/*
CS235
Project 1
Mitchell Lipyansky
09/06/2024

test.cpp

Program to test the Dish class constructors, getter and setter methods, and 'display' function
*/

#include "Dish.hpp"
#include <vector>
#include <string>

int main() {
    // Instantiate a dish with the default constructor for testing

    Dish defaultTester;
    defaultTester.setPrepTime(30);
    defaultTester.setPrice(9.99);
    defaultTester.display();

    std::cout << std::endl;

    // Instantiate a dish with the parameterized constructor for testing

    //Initialize list of ingredients
    std::vector<std::string> carbonaraIngredients = {"Pasta", "Eggs", "Pancetta", "Parmesan", "Pepper"};

    Dish carbonara("Pasta Carbonara", carbonaraIngredients, 20, 12.50, Dish::ITALIAN); // parameterized constructor
    carbonara.display();

    std::cout << std::endl;

    // Using setters to update values
    Dish chickenWaffles;
    chickenWaffles.setName("Chicken and Waffles");
    chickenWaffles.setIngredients({"Chicken", "Waffles"});
    chickenWaffles.setPrepTime(30);
    chickenWaffles.setPrice(19.99);
    chickenWaffles.setCuisineType(Dish::AMERICAN);
    chickenWaffles.display();
    std::cout << std::endl;

    Dish scrambledEggs("Scrambled Eggs", {"Eggs", "Salt", "Pepper"}, 10, 10.00, Dish::FRENCH);

    // Testing the getName function
    std::string dishName = scrambledEggs.getName();
    std::cout << "Dish Name (using getName): " << dishName << std::endl;

    // Testing getIngredients function
    std::vector<std::string> ingredients = scrambledEggs.getIngredients();
    std::cout << "Ingredients (using getIngredients): ";
    for (size_t i = 0; i < ingredients.size(); ++i) {
        std::cout << ingredients[i];
        if (i < ingredients.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    // Testing getPrepTime function
    int prepTime = scrambledEggs.getPrepTime();
    std::cout << "Preparation Time (using getPrepTime): " << prepTime << " minutes" << std::endl;

    // Testing getPrice function
    double price = scrambledEggs.getPrice();
    std::cout << "Price (using getPrice): $" << price << std::endl;

    // Testing getCuisineType function
    std::string cuisineType = scrambledEggs.getCuisineType();
    std::cout << "Cuisine Type (using getCuisineType): " << cuisineType << std::endl;

    return 0;
}
