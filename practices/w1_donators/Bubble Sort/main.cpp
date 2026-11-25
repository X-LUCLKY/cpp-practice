//
// Created by X.Lucky on 2026/11/25.
//
#include<iostream>
template<typename T>void print(const T *arr,int n) {
    for (int i=0;i<n;i++) {
        std::cout<<arr[i];
        std::cout<<" ";
    }
}
template<typename T>void sort(T *arr,int n) {
    int x=n;
    while (x>=1) {
        for (int j=0;j<x-1;j++) {
            if (arr[j]>=arr[j+1]) {
                std::swap(arr[j],arr[j+1]);
            }
        }
        x--;
    }
}
template<typename T>void swap(T &a,T &b) {
    if (a>=b) {
        a=a+b;
        b=a-b;
        a=a-b;
    }
}
int main()
{
    int arri[] = {1, 2, 3, 6, 4, -5, 0, 9, 4};
    print(arri, sizeof(arri)/sizeof(arri[0]));
    sort(arri, sizeof(arri)/sizeof(arri[0]));
    std::cout << std::endl;
    print(arri, sizeof(arri)/sizeof(arri[0]));
    std::cout << std::endl;

    double arrd[] = {3.14, 1.59, 2.65, 0.78, 9.32, -2.71, 5.0, 5.0, 0.001};
    print(arrd, sizeof(arrd)/sizeof(arrd[0]));
    sort(arrd, sizeof(arrd)/sizeof(arrd[0]));
    std::cout << std::endl;
    print(arrd, sizeof(arrd)/sizeof(arrd[0]));
    std::cout << std::endl;

    char arrc[] = {'R', 'T', 'A', 'K', 'P', 'B', 'F', 'M'};
    print(arrc, sizeof(arrc)/sizeof(arrc[0]));
    sort(arrc, sizeof(arrc)/sizeof(arrc[0]));
    std::cout << std::endl;
    print(arrc, sizeof(arrc)/sizeof(arrc[0]));
    std::cout << std::endl;
    return 0;
}
