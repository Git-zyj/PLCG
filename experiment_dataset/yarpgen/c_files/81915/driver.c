#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2022859819;
unsigned short var_4 = (unsigned short)8841;
signed char var_9 = (signed char)-34;
int zero = 0;
unsigned int var_10 = 3492672750U;
unsigned short var_11 = (unsigned short)54745;
unsigned long long int var_12 = 3702910329222778358ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
