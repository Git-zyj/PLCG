#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2576275631U;
unsigned int var_5 = 2524829585U;
unsigned int var_6 = 1444112613U;
unsigned int var_9 = 2578356725U;
unsigned int var_10 = 1500105799U;
int zero = 0;
unsigned int var_11 = 2388507878U;
unsigned int var_12 = 2841459246U;
unsigned int var_13 = 4024335572U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
