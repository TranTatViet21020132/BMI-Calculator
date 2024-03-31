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
    return (height >= 54.6 && height <= 272);
}

string getHealthCondition(double bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi >= 18.5 && bmi < 24.9) {
        return "Normal weight";
    } else if (bmi >= 24.9 && bmi < 29.9) {
        return "Overweight";
    } else {
        return "Obese";
    }
}

int main() {
    double weight, height;

    cout << "Enter weight (kg): ";
    cin >> weight;

    cout << "Enter height (cm): ";
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
