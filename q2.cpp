#include <iostream>

using namespace std;

class Temperature {
	private:
		double degreesKelvin,
		       degreesFahrenheit,
		       degreesCelsius;
	public:
		void setTempKelvin(double degreesKelvin) { this->degreesKelvin = degreesKelvin; }
		double getTempKelvin() { return degreesKelvin; }
		void setTempCelsius() { this->degreesCelsius = degreesKelvin - 273.15; }
		double getTempCelsius() { return degreesCelsius; } 
		void setTempFahrenheit() { this->degreesFahrenheit = (degreesCelsius)*(9/5.0) + 32; }
		double getTempFahrenheit() { return degreesFahrenheit; }
};

int main() {
	Temperature temps;
	double tempK;

	cout << "Enter a temperature in degrees Kelvin: ";
	cin >> tempK;
	temps.setTempKelvin(tempK);
	temps.setTempCelsius();
	temps.setTempFahrenheit();

	cout << "\n" << temps.getTempKelvin() << " degrees Kelvin is equal to: " << endl <<
			"\t" << temps.getTempCelsius() << " degrees Celsius" << endl <<
			"\t" << temps.getTempFahrenheit() << " degrees Fahrenheit" << endl;

	return 0;
}
