#include <iostream>
#include <iomanip>

using namespace std;

int calculateSum(const int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		{
			sum += arr[i];
		}
	}
	return sum;
}

double getAverage(int sum, int size) {
	return static_cast <double>(sum) / size;
}

void addBonus(int arr[], int size, int bonus = 5) {
	for (int i = 0; i < size; i++) {
		arr[i] += bonus;
	}
}
int findHighest(const int* arr, int size) {
	int highest = arr[0];
		for (int i = 1; i < size; i++) {
			if (arr[i] > highest) {
				highest = arr[i];
			}
		}
	return highest;
}

int countPassed(const int arr[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 70) {
			count++;
		}
	}
	return count;
}
void printScores(const int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	const int SIZE = 5;
	int scores[SIZE] = { 65, 82, 90, 45, 78 };

	cout << "Original Scores";
	printScores(scores, SIZE);

	int sum = calculateSum(scores, SIZE);
	double average = getAverage(sum, SIZE);
	cout << "Sum:" << sum << endl;
	cout << fixed << setprecision(2);
	cout << "Average: " << average << endl;

	addBonus(scores, SIZE); //uses default bonus of 5
	cout << "Scores after bonus: ";
	printScores(scores, SIZE);

	cout << "Highest score: " << findHighest(scores, SIZE) << endl;
	cout << "Number passed ( >= 70):" << countPassed(scores, SIZE) << endl;

	return 0;
}