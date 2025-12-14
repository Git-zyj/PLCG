#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-96;
unsigned long long int var_7 = 13385737549817449668ULL;
signed char var_8 = (signed char)-122;
unsigned int var_9 = 1397572020U;
long long int var_11 = -568009609718162656LL;
int zero = 0;
unsigned int var_12 = 1701418691U;
unsigned int var_13 = 3941953031U;
void init() {
}

void checksum() {
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
