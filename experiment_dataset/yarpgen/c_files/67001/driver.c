#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14591713075787659330ULL;
int var_6 = 963200774;
unsigned int var_7 = 1881278050U;
unsigned long long int var_8 = 5668145512731543853ULL;
unsigned short var_9 = (unsigned short)5454;
unsigned int var_10 = 1294051593U;
int zero = 0;
unsigned long long int var_20 = 4787659662380303311ULL;
unsigned short var_21 = (unsigned short)2099;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
