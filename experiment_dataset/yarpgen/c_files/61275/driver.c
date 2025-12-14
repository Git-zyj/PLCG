#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2022194612U;
unsigned short var_5 = (unsigned short)58455;
short var_13 = (short)27749;
short var_14 = (short)24643;
int zero = 0;
signed char var_15 = (signed char)-50;
unsigned long long int var_16 = 11783854486732658638ULL;
int var_17 = -1897584542;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
