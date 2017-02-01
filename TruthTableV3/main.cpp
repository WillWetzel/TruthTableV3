#include <iostream>
#include "TruthTable.h"
#include "ANDTable.h"

using namespace std;

int main() {
	const unsigned COL = 3;

	TruthTable table(COL);

	//table.printTable();

	getchar();
	getchar();

	table.~TruthTable();

	return 0;
}