#include <iostream>
#include <iomanip>

using namespace std;

class GasPump {
	private:
		double amountDispensed,
		       amountCharged,
		       costPerGallon,
			   dispenseTime;

	public:
		double getAmountDispensed() { 
			amountDispensed = 0.10 * dispenseTime;
			return amountDispensed; 
		}
		double getCostPerGallon() { 
			return costPerGallon; 
		}
		double getAmountCharged() { 
			amountCharged = getCostPerGallon() * getAmountDispensed();
			return amountCharged; 
		}
		void setCostAndTime(double cpg, double time) { 
			costPerGallon = cpg; 
			dispenseTime = time;
		}
		void reset() {
			amountDispensed = 0.0;
			amountCharged = 0.0;
		}		
};
	
int main() {
	
    //Define variables
	GasPump gas;
	char dispenseAgain;
	double cpg;
	double seconds;
	

    // Call Functions
	do {
		cout << "Enter the cost of gas per gallon: $";
		cin >> cpg;
		cout << "Enter the amount of seconds for which you would like to pump gas: ";
		cin >> seconds;
		gas.setCostAndTime(cpg, seconds);
		

		cout << "\nThe cost per gallon of gas is $" << fixed << setprecision(2) << gas.getCostPerGallon() << "." <<endl;
		cout << "So, the total amount charged for " << fixed << setprecision(2) << gas.getAmountDispensed() << 
				" gallons of gas dispensed is $" << fixed << setprecision(2) << gas.getAmountCharged() << "." << endl;

		cout << "\nWould you like to dispense gas again? Enter Y for yes or any other key for no: ";
		cin >> dispenseAgain;

		if (dispenseAgain == 'Y') {
			gas.reset();
		}
	}
	while(dispenseAgain == 'Y');



	return 0;
}
