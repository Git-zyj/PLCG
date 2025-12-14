#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32930;
unsigned short var_2 = (unsigned short)57312;
int var_4 = 1210691272;
int var_5 = 1408451641;
unsigned short var_11 = (unsigned short)3315;
int zero = 0;
int var_13 = 1416635666;
unsigned long long int var_14 = 16396856222410637363ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
