#include <cmath>
#include <iostream>
#include <string>

using namespace std;

class Number {
private:


};

class Logarithm : public Number {
private:
	double base, argument;
public:
	double doubleValue() { return log(this->argument) / log(this->base); }
	Logarithm(double inputBase, double inputArgument) {
		
		if (inputBase != 1 and inputBase >0 and inputArgument > 0){
			this->base = inputBase;
			this->argument = inputArgument;
		}
		else {
			throw invalid_argument;
		}

		
	}
	
};

int main() {

}
