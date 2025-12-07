/* Algorithm Challenge & Problem Solving
 * 25 - Min of Random Array
 *
 * This program fills an array (up to 100 elements) with random numbers
 * between 1 and 100. After generating the array, the program prints all
 * elements and determines the minimum value.
 *
 * This challenge demonstrates:
 *   - Generating random numbers within a controlled range
 *   - Working with static arrays
 *   - Traversing arrays to find a minimum value
 *   - Applying comparison logic and modular function design
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Generates a random number in the range [From, To]
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Fills array with random numbers between 1–100
void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// Prints array contents
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// Returns the minimum value found in the array
int MinNumberInArray(int arr[100], int arrLength)
{
    int Min = arr[0]; // Assume the first element is the minimum

    for (int i = 1; i < arrLength; i++)
    {
        if (arr[i] < Min)
            Min = arr[i];
    }
    return Min;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nMin number in array: ";
    cout << MinNumberInArray(arr, arrLength) << endl;

    return 0;
}
