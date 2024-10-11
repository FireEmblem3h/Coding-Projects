// CSC1060_CJohnson_Challenge1
// Class - Computer Science I
// Prof - Ram Longman

//Brief - In this assignment, we will be calculating the payroll system for Community College of Aurora. 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declaring constant variables
    double const SS = 0.04;
    double const PAYRATE = 19.55;
    double const FEDTAX = 0.21;
    double const STATETAX = 0.03;
    double const CCAFOUND = 10; 
    double const DEPEND_INSURE = 10.55; 

    // Declaring variables for calculations
    double hrsWork, numDepend, dependDeduct, SSN, grossPay, netPay, fcia, totFedTax, totStateTax;  

    //Request info from User 
    cout << "CCA Payroll Application" << endl;
    cout << "-----------------------" << endl;
    cout << " " << endl;

    cout << "Enter employee SSN (digits only, no spaces or dashes): ";
    cin >> SSN;
    cout << "Please enter the hours worked this week: ";
    cin >> hrsWork;
    cout << "Enter the number of dependents: "; 
    cin >> numDepend;

    //Calculations
    dependDeduct = DEPEND_INSURE * numDepend;
    grossPay = hrsWork * PAYRATE; 
    fcia = SS * grossPay; 
    totFedTax = grossPay * FEDTAX;
    totStateTax = grossPay * STATETAX;
    netPay = grossPay - (CCAFOUND + dependDeduct + fcia + totFedTax + totStateTax);


    // Output results, making sure to link each output with the correct variable 
    cout << " " << endl;
    cout << "Employee number: " << SSN << endl;
    cout << "Hours worked: " << hrsWork << endl;
    cout << "Dependents: " << numDepend << endl;
    cout << fixed << setprecision(2) << "Regular pay rate: $" << PAYRATE << endl;
    cout << fixed << setprecision(2) << "Gross pay: $" << grossPay << endl;
    cout << fixed << setprecision(2) << "FICA tax withheld: $" << fcia << endl;
    cout << fixed << setprecision(2) << "Federal Income Tax withheld: $" << totFedTax << endl;
    cout << fixed << setprecision(2) << "State Tax withheld: $" << totStateTax << endl;
    cout << fixed << setprecision(2) << "CCA Foundation Donation withheld: $" << CCAFOUND << endl;
    cout << fixed << setprecision(2) << "Dependents withholdings: $" << dependDeduct << endl;
    cout << fixed << setprecision(2) << "Net Pay: $" << netPay << endl;

    






    return 0;
}


