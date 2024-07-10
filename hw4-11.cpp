// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {


  // integers for values 
  double beginningBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;
  double accountBalance = 0.0;

  
  //processing 
  cout << "beginningBalance: ";
  cin >> beginningBalance;

  
  cout << "totalDeposits: ";
  cin >> totalDeposits;

  
  cout << "totalWithdrawals: ";
  cin >> totalWithdrawals;


  //calulations
  accountBalance = beginningBalance + totalDeposits - totalWithdrawals;
  cout << "accountBalance: $" << accountBalance << endl;
  
  
  return 0;
} // end of main function