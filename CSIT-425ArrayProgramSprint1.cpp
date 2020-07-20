//Program to add two arrays together
//Written by Christian Proietti
//July 2020
//Language: C++

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    cout << "This program will take two arrays, convert them into numbers, add the numbers together and display the resulting number as an array." << endl;
    int x, y;
    vector<int> array1;
    while (cin >> x && x != 0)
    {
      array1.push_back(x);
    }
    cout << "Enter elements for array1: ";
    cin >> x;
    vector<int> array2;
    while (cin >> y && y != 0)
    {
      array2.push_back(y);
    }
    cout << "Enter elements for array2: ";
    cin >> y;
}