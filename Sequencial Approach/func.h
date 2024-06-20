
#ifndef func_h
#define func_h

#include <stdio.h>
#include <vector>

using namespace std;

/// 4 functions
namespace func {
    // Variable dimensions unimodal functions

    float sphere(vector<float> &x);
    float rosenbrock(vector<float> &x);

    // Variable dimensions multimodal functions

    float rastrigin(vector<float> &x);
    float griewangk(vector<float> &x);
}

#endif

