#include "chapter6.h"

int fact(int n){
    if (n < 1) return n;
    int result = n;
    while (--n)
        result *= n;
    return result;
}