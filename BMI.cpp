#include <iostream>
#include <cmath>

using namespace std;

double calculateBMI(double weight, double height) {
    return weight / pow(height, 2);
}

bool isValidWeight(double weight) {
    return (weight >= 1.1 && weight <= 650);
}

bool isValidHeight(double height) {
    return (height >= 0.55 && height <= 2.72);
}

string getHealthCondition(double bmi) {
    switch (static_cast<int>(bmi)) {
        case 0 ... 18:
            return "Underweight";
            break;
        case 19 ... 24:
            return "Normal weight";
            break;
        case 25 ... 29:
            return "Overweight";
            break;
        default:
            return "Obese";
            break;
    }
}

int main() {
    double weight, height;

    cout << "Enter weight (kg): ";
    cin >> weight;

    cout << "Enter height (m): ";
    cin >> height;

    if (!isValidWeight(weight) || !isValidHeight(height)) {
        cout << "Invalid input" << endl;
        return 1;
    }

    double bmi = calculateBMI(weight, height);

    cout << "BMI: " << bmi << endl;
    cout << "Health condition: " << getHealthCondition(bmi) << endl;

    return 0;
}
