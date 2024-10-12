// Repo B: math_operations.cpp
#include "math_operations.h"

namespace math_operations {
    int multiply_and_add(int a, int b, int c) {
        int sum = utils::add(a, b);  // Call add from Repo C
        return sum * c;
    }
}
