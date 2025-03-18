#include <iostream>
#include <string>
using namespace std;

string decimalToRoman(int num) {
    string roman[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM"};
    int values[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900};
    string result = "";
    
    for (int i = 11; i >= 0; i--) {
        while (num >= values[i]) {
            num -= values[i];
            result += roman[i];
        }
    }
    
    return result;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    
    if (num < 1 || num > 3999) {
        cout << "Please enter a number between 1 and 3999." << endl;
        return 1;
    }
    
    cout << "The Roman numeral for " << num << " is: " << decimalToRoman(num) << endl;
    return 0;
}
