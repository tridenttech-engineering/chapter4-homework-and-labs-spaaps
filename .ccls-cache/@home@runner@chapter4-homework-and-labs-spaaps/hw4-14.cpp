// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {


  //variables for pizzas and totalpizza
  double smallPizza = 0.0;
  double mediumPizza = 0.0;
  double largePizza = 0.0;
  double familyPizza = 0.0;
  double totalPizza = 0.0;


  // variables for pizza percentages
  double smallPizzapercent = 0.0;
  double mediumPizzapercent= 0.0;
  double largePizzapercent= 0.0;
  double familyPizzapercent= 0.0;

  //processing
  cout << "smallPizza: ";
  cin >> smallPizza;
 
  
  cout << "mediumPizza: ";
  cin >> mediumPizza;
 
 
  cout << "largePizza: ";
  cin >> largePizza;
 
  
  cout << "familyPizza: ";
  cin >> familyPizza;


  //calculations for totalPizza
   totalPizza = smallPizza + mediumPizza + largePizza + familyPizza;


  //calulations for pizza percentages
  smallPizzapercent = (smallPizza / totalPizza) * 100;

  
  mediumPizzapercent = (mediumPizza / totalPizza) * 100;

  
  largePizzapercent = (largePizza / totalPizza) * 100;

  
  familyPizzapercent = (familyPizza / totalPizza) * 100;

  
  //output
  cout << totalPizza;
  cout << smallPizzapercent;
  cout << mediumPizzapercent;
  cout << largePizzapercent;
  cout << familyPizzapercent << endl;
  
  
  
  return 0;
} // end of main function