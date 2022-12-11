#include<iostream>;
#include"Header.h";



void mySwap(int* ptrA, int* ptrB) {

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    std::cout <<"a = " << *ptrA << "   ===   " <<"b = " << *ptrB << std::endl;

}

void arrSwap(int *arr, int sizeOfArray) {

    srand(time(NULL));

 

    for (int i = 0; i < sizeOfArray; i++) {
        arr[i] = rand() % 100;                      
    }
    
    std::cout << "source arr:" << std::endl;


    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout << arr[i] << '\t';
    }
        
    std::cout <<"\n" << "=================================" << std::endl;

    int* pArrFirst = &arr[0];
    int* pArrLast = &arr[sizeOfArray - 1];
    
    int temp = *pArrFirst;
    *pArrFirst = *pArrLast;
    *pArrLast = temp; 

    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout << arr[i] << '\t';
    }
}


int main()
{
    int arr[10] = {};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    int a = 5;

    int b = 10;

    std::cout << "task 2" << "\n\n";

    mySwap(&a, &b);

    std::cout << "\n\n" << "task 3" << "\n\n";

    arrSwap(arr, sizeOfArray);

    std::cout << "\n\n" << "task 4" << "\n\n";


    double m = 2.0;

    double * ptrA = &m;
    
    double** ptrPTRA = &ptrA;


    std::cout << "*ptrPTRA = " << *ptrPTRA << std::endl; //for better understanding
    std::cout << "**ptrPTRA = " << **ptrPTRA << std::endl;


    return 0;

}


