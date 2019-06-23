#include <iostream>
#include <vector>
#include <string>

#define OUTPUT(X) std::cout << X;
#define INPUT(X) std::cin >> X;


int main() {

  int kidsNumber = 10;
  OUTPUT("Welcome to the Theme Park Planner! Please input each kid's info: ")
  std::cout << std::endl;

  std::string name;     //INPUT  - name of the kid
  int age;              // OUTPUT - age of the kid
  char is_vegetarian;   //Y or N
  char eats_cheese;     // Y or N
  std::string attraction ;
  std::string food_item;
  float cost;
  float total_cost;
  int admission_fee;

  for (int i=1; i <= kidsNumber; i++) {
    OUTPUT("Kid #" << i)
    std::cout << std::endl;
    OUTPUT("What is your kids name?\t")
    INPUT(name)
    OUTPUT("How old is the kid?\t")
    INPUT(age)
    OUTPUT("Vegetarian?\t")
    INPUT(is_vegetarian)
    OUTPUT("Does he/she eat cheese?\t")
    INPUT(eats_cheese)

    if(age < 5){
      total_cost += 0;
      attraction = "Ferris Wheel and Sheep Petting Zoo";
    } else if (age >= 5 && age <= 12) {
      total_cost += 15;
      attraction = "Tea Cups and Laser Tag";
    } else {
      total_cost += 20;
      attraction = "Rollecr Coaster and Zip Line";
    }

    if(is_vegetarian == 'Y' && eats_cheese == 'Y' ) {
        total_cost += 2.5;
        food_item = "Cheese Pizza";
    }
    else if(is_vegetarian == 'Y' && eats_cheese == 'N' ) {
      total_cost += 1.75;
      food_item = "Happy Garden";
    }
    else if(is_vegetarian == 'N' && eats_cheese == 'Y' ) {
      total_cost += 3.5;
      food_item = "Cheeseburgers";
    }
    else if(is_vegetarian == 'N' && eats_cheese == 'N' ) {
      total_cost += 3.25;
      food_item = "Hamburgers";
    }

    OUTPUT(name)
    OUTPUT(" will be going to the ")
    OUTPUT(attraction)
    std::cout << std::endl;
    OUTPUT("Pack a ")
    OUTPUT(food_item)
    OUTPUT(" meal for " << name << "!" << std::endl << std::endl)

  }
  OUTPUT("Total cost: " << total_cost)
  OUTPUT("Average cost per kid: " << total_cost/kidsNumber)



  return 0;
}
