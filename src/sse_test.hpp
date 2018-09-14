#pragma once
#include "utilities/OBJLoader.hpp"
#include <vector>

union sse_float4 {
    float __attribute__ ((vector_size (16))) vector;
    float elements[4];
    //WRITE FOR float4 specific change the return value
};

void sse_test(Mesh &);