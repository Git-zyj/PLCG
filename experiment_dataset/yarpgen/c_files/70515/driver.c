#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2866146511U;
unsigned short var_9 = (unsigned short)21911;
unsigned int var_13 = 363981726U;
unsigned char var_14 = (unsigned char)72;
int var_15 = -494480716;
signed char var_17 = (signed char)-8;
int zero = 0;
signed char var_19 = (signed char)104;
unsigned long long int var_20 = 1333820770548662577ULL;
unsigned short var_21 = (unsigned short)54923;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
