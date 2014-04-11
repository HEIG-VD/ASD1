#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include "tri.h"

using namespace std;

void log(double* time, const char* file)
{
	FILE *OUTPUT_FILE;
	OUTPUT_FILE = fopen(file, "a+");

	if (OUTPUT_FILE != NULL)
	{
		fprintf(OUTPUT_FILE,"time: %.2f\n", *time);
		fclose(OUTPUT_FILE);
	}
}

void init(int tableau[], const int size)
{
	srand(time(NULL));

	for (int i = 0; i < size; ++i)
	{
		tableau[i] = rand() % 100 + 1;
	}
}

void afficher(int tableau[], const int size)
{
	cout << ":::::TABLEAU:::::::::" << endl;

	for (int i = 0; i < size; ++i)
	{
		cout << tableau[i] << endl;
	}

	cout << endl;
}


int main()
{
	const int SIZE = 10;
	const char * PATH = "LOG.txt";
	clock_t start, end;
	double time;
	int* tableau = new int[SIZE];

	init(tableau, SIZE);

	afficher(tableau, SIZE);

	start = clock();

	//triSelection(tableau, SIZE);
	//triSelection(tableau,SIZE);
	triTas(tableau,0, SIZE - 1);
	end = clock();

	afficher(tableau, SIZE);

	time = double((end - start)) / CLOCKS_PER_SEC;

	//cout << time << endl;

	log(&time, PATH);

	system("PAUSE");
	return EXIT_SUCCESS;
}