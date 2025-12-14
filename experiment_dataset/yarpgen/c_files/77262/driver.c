#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3530667123U;
signed char var_3 = (signed char)-21;
long long int var_4 = 1572427814177378705LL;
unsigned short var_7 = (unsigned short)16783;
int zero = 0;
int var_11 = -166415602;
unsigned int var_12 = 2018160904U;
void init() {
}

void checksum() {
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
