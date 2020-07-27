//Program to add two arrays together
//Written by Christian Proietti
//Code adapted from https://stackoverflow.com/questions/11201015/converting-an-integer-array-into-a-number
//July 2020
//Language: C++

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main(void)
{
    cout << "This program will take two arrays, convert them into numbers, add the numbers together and display the resulting number as an array." << endl;
    int x, y;

    stringstream m;
    cout << "Enter elements for array1 (enter 0 to stop): ";                  //Inputs for array1
    vector<int> array1;
    while (cin >> x && x != 0)
    {
      array1.push_back(x);
    }
    for (int i : array1)                                    //Converting array1 into a number
    m << i;
    int firstNumber;
    m >> firstNumber;
    cin >> x;

    stringstream n;
    cout << "Enter elements for array2 (enter 0 to stop): ";                  //Inputs for array2
    vector<int> array2;
    while (cin >> y && y != 0)
    {
      array2.push_back(y);
    }
    cin >> y;
    for (int j : array2)                                     //Converts array2 into a number
    n << j;
    int secondNumber;
    n >> secondNumber;

    cout << "Array1 resulted in number: " << firstNumber << endl;
    cout << "Array2 resulted in number: " << secondNumber << endl;

    int thirdNumber = firstNumber + secondNumber;
    cout << "Both numbers added together would be: " << thirdNumber << endl;
    string stringThirdNumber = to_string(thirdNumber);

    vector<int> array3;

    for (unsigned k= 0; k < stringThirdNumber.length(); ++k)
    {
     array3.push_back(stringThirdNumber.at(k));
    }
}
