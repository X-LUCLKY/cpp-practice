#include <iostream>
#include "activations.h"

int main() {
    double data[] = {-2.0, -0.5, 0.0, 0.5, 88.5};
    int n = sizeof(data) / sizeof(data[0]);

    std::cout << "sigmoid:"<<std::endl;
    double *data_sig = dl::activation(data, n, dl::sigmoid);
    dl::print(data_sig, n);

    std::cout << std::endl << "relu:"<<std::endl;
    double *data_relu = dl::activation(data, n, dl::relu);
    dl::print(data_relu, n);

    std::cout << std::endl << "relu6:"<<std::endl;
    double *data_relu6 = dl::activation(data, n, dl::relu6);
    dl::print(data_relu6, n);

    std::cout << std::endl << "gelu:"<<std::endl;
    double *data_gelu = dl::activation(data, n, dl::gelu);
    dl::print(data_gelu, n);

    delete[] data_sig;
    delete[] data_relu;
    delete[]  data_relu6;
    delete[] data_gelu;
    return 0;
}