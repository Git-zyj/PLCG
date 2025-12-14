#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 137344292U;
unsigned long long int var_5 = 4129107412090485817ULL;
unsigned int var_6 = 3464599094U;
unsigned long long int var_9 = 7741429891217828779ULL;
int zero = 0;
unsigned int var_10 = 3789777052U;
short var_11 = (short)15068;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
