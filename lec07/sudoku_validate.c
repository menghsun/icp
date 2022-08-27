#include <stdio.h>
#include <stdbool.h>

#define sudokuSize  81

int map[sudokuSize];

bool checkUnity(int arr[])
{
    int arr_unity[9];   // counters

    for(int i=0; i<9; ++i)
        arr_unity[i] = 0;    // initialize
    for(int i=0; i<9; ++i)
        ++arr_unity[arr[i]-1];    // count
    for(int i=0; i<9; ++i)
        if(arr_unity[i] != 1)   // all element
            return false;          // must be 1
    return true;
}

bool isCorrect()
{
    bool check_result;
    int check_arr[9];
    int location;
    for(int i=0; i<81; i+=9)    // check rows
    {
        for(int j=0; j<9; ++j)
            check_arr[j] = map[i+j];
        check_result = checkUnity(check_arr);
        if(check_result == false)
            return false;
    }
    for(int i=0; i<9; ++i)   // check columns
    {
        for(int j=0; j<9; ++j)
            check_arr[j] = map[i+9*j];
        check_result = checkUnity(check_arr);
        if(check_result == false)
            return false;
    }
    for(int i=0; i<9; ++i)   // check cells
    {
        for(int j=0; j<9; ++j)
        {
            location = 27*(i/3) + 3*(i%3) +9*(j/3) + (j%3);
            check_arr[j] = map[location];
        }
        check_result = checkUnity(check_arr);
        if(check_result == false)
            return false;
    }
    return true;
}

int main()
{
//    int sudoku_in[sudokuSize];

    for(int i=0; i<sudokuSize; ++i)
        scanf("%d", &map[i]);     // read in map

    // print out the map
//    for(int i=0; i<Sudoku::sudokuSize; ++i)
//   {
//        cout << su[j].getElement(i) << " ";
//        if(i % 9 == 8 )
//            cout << endl;
//    }
    if(isCorrect()) // validation results
        printf("CORRECT\n");
    else
        printf("INCORRECT\n");

    return 0;
}

