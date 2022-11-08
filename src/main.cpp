#include <iostream>
#include <fstream>
#include "insertionSort.cpp"
#include "bubbleSort.cpp"
#include "quickSort.cpp"
#include <chrono>
using namespace std;

int main()
{
	fstream f;
	chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	int a[101], i, n, j, key;
	int way, choice;
	string type, sort;

	// opening the file
	f.open("insert.txt");
	// Read da Wae
	f >> type;
	if (type == "decreasing")
		way = 1;
	else
		way = 2;
	f >> sort;
	if (sort == "insertion")
		choice = 1;
	else if (sort == "bubble")
		choice = 2;
	else
		choice = 3;
	// Read n and vector and type of Sorting
	f >> n;
	for (i = 0; i < n; i++)
		f >> a[i];

	// Space
	f << endl;
	f << endl;
	switch (choice)
	{

	case 1:
	{
		f << "Beginning Time = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
		// Insertion Sort
		insertionSort(a, n, way);
		for (i = 0; i < n; i++)
			f << a[i] << " ";
		f << endl;
		f << "End time = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << "[ns]" << std::endl;
		break;
	}

	case 2:
	{
		f << "Beginning Time = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
		// Bubble Sort
		bubbleSort(a, n, way);
		for (i = 0; i < n; i++)
			f << a[i] << " ";
		f << endl;
		f << "End time = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << "[ns]" << std::endl;
		break;
	}

	case 3:
	{
		f << "Beginning Time = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
		// Quick Sort
		quickSort(a, a[0], a[n], way);
		for (i = 0; i < n; i++)
			f << a[i] << " ";
		f << endl;
		f << "End time = " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << "[ns]" << std::endl;
	}
	}
	f.close();
}