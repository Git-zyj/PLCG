#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3317368191U;
unsigned long long int var_12 = 1908981351981616531ULL;
unsigned long long int var_13 = 16948105822327623559ULL;
int var_14 = 1576346358;
unsigned short var_18 = (unsigned short)59669;
int zero = 0;
signed char var_20 = (signed char)-28;
unsigned long long int var_21 = 1641917026405752569ULL;
unsigned long long int var_22 = 921776441143901238ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
