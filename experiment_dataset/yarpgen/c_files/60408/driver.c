#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
short var_1 = (short)-12539;
unsigned short var_2 = (unsigned short)8281;
unsigned int var_10 = 2979089035U;
unsigned long long int var_11 = 5173387629609100888ULL;
int var_12 = -594253052;
int zero = 0;
long long int var_14 = 6577331394760382989LL;
int var_15 = -316804881;
short var_16 = (short)28232;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
