#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class NumberUtils {
public:
	static int max(int a, int b) { return a > b ? a : b; }
	static int min(int a, int b) { return a < b ? a : b; }
	static float avg(int a, int b) { return (a + b) / 2; }
};

class Numbers_Pair{

private:
	int a;
	int b;

public:

	Numbers_Pair(int aa, int bb) {
		this->a = aa;
		this->b = bb;
	}

	int max(int a, int b)
	{
		return a > b ? a : b;
	}

	int min(int a, int b)
	{
		return a > b ? b : a;
	}

	float avg(int a, int b)
	{
		return (a + b) / 2;
	}

};

int main() {

}
