#include <string>
#include <iomanip>
#include "TruthTable.h"
using namespace std;

TruthTable::TruthTable(const int x) {
	colCount = x;
	rowCount = pow(2, x);

	table = new int*[rowCount];
	for (int i = 0; i < rowCount; ++i)
		table[i] = new int[colCount];

	cout << "Making TruthTable" << endl;
}

TruthTable::TruthTable(const TruthTable& table) {
	if (this != &table)
		*this = table;
}

TruthTable::~TruthTable() {

	for (int i = 0; i < rowCount; i++) {
		for (int j = 0; j < colCount; j++) {
			//delete table[i][j]; // delete stored pointer
		}
		delete[] table[i]; // delete sub array
	}
	delete[] table; //delete outer array
	table = NULL;

	/*
	for (int i = 0; i < colCount; i++)
		for (int j = 0; j < rowCount; j++) {
			delete table[j];
		}
	delete[] table;
	*/
}

void TruthTable::printTable() {
	for (int i = 0; i < colCount; i++)
		for (int j = 0; j < rowCount; j++) {
			cout << "a[" << i << "][" << j << "]: ";
			cout << table[i][j] << endl;
		}
}