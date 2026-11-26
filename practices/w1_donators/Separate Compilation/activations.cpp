#include "activations.h"
#include <iostream>
#include <cmath>
static double clamp(double x, double low, double high) {
    if (x < low) return low;
    if (x > high) return high;
    return x;
}
namespace dl {
    double relu6(double x) {
        return clamp(x, 0.0, 6.0);  // 此处会正确找到全局 static clamp
    }

    double sigmoid(double x) {
        return 1.0 / (1.0 + std::exp(-x));
    }

    double relu(double x) {
        return x > 0.0 ? x : 0.0;   // 不必用 clamp，避免歧义
    }

    double gelu(double x) {
        return 0.5 * x * (1.0 + std::erf(x / std::sqrt(2.0)));
    }

    double* activation(const double* arr, int n, double (*func)(double)) {
        double* result = new double[n];
        for (int i = 0; i < n; ++i)
            result[i] = func(arr[i]);
        return result;
    }

    void print(const double* arr, int n) {
        for (int i = 0; i < n; ++i)
            std::cout << arr[i] << " ";
    }

}