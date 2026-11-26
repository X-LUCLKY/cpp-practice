

#ifndef UNTITLED1_ACTIVATIONS_H
#define UNTITLED1_ACTIVATIONS_H
static double clamp(double x, double low, double high);
namespace dl {
    double relu6(double x);
    double sigmoid(double x);
    double relu(double x);
    double gelu(double x);
    double* activation(const double* arr, int n, double (*func)(double));
    void print(const double* arr, int n);
}
#endif //UNTITLED1_ACTIVATIONS_H
