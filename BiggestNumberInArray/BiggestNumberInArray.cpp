#include <iostream>
#include <assert.h>

using namespace std;

int GetBiggestNumber(int theArray[], int size);
constexpr int kSize = 7;
int myArray[kSize] = { 11, 34, 5, -8, 19, -41, -2 };

int main()
{
    cout << "The biggest number in your array is " << GetBiggestNumber(myArray, kSize);

}

int GetBiggestNumber(int theArray[], int size)
{
    int biggest = theArray[0];

    for (int i = 1; i < size; i++)
    {
        if (theArray[i] > biggest)
        {
            biggest = theArray[i];
        }
    }
    return biggest;
}