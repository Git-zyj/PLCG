#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50030;
unsigned long long int var_1 = 1572390322147346131ULL;
int var_2 = 1398817571;
int var_4 = -775789185;
short var_12 = (short)-11705;
int zero = 0;
unsigned int var_14 = 2511612485U;
signed char var_15 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
