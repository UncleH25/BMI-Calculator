#include <iostream>

using namespace std;

int main()
{
	//Variables for height (cm) and weight, and constants for conversion
    double height = 0.00;
    double weight = 0.00;
    const double CM_PER_M = 100.0;

	//Ask the user to type in their height and weight
    cout << "Please Enter Your Height in Centimetres: \n" << endl;
    cin >> height;
    cout << "Please Enter Your Weight in Kilograms: \n" << endl;
    cin >> weight;

	//Convert height from cm to m
    double HEIGHT_IN_METRES = height / CM_PER_M;

	//Calculate BMI using the formula weight (kg) / height (m) * height (m)
    double bmiCalculation = weight / (HEIGHT_IN_METRES * HEIGHT_IN_METRES);

	//Output the BMI result
    cout << "Your BMI is " << bmiCalculation << endl;

    return 0;
}