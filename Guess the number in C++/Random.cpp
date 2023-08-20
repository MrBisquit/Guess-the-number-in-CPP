#include <random>
#include "Random.h"

using namespace std;

int RandomNumber::Next() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 100);

	return dis(gen);
}