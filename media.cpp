#include "fastio.cpp"

#include <iostream>
#include <vector>
#include <fstream>
#include <omp.h>

#define MAX 20

Printer<> print;
Scanner<> scan;

int main() {
    long long N; scan(N);
    std::vector<long long>v(N);

    for(auto &i : v)
        scan(i);

    long long sum = 0;
    long long thread = 0;

    #pragma omp parallel for reduction (+:sum)
    for (long long i = 0; i < N; i++) 
        sum += v[i];
    
    print(sum / (long double)N);
    return 0;
}
