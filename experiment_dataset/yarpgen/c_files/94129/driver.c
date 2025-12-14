#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
unsigned long long int var_1 = 14680764999170873567ULL;
unsigned int var_3 = 2850322921U;
int var_6 = 1658392956;
signed char var_11 = (signed char)-2;
int zero = 0;
signed char var_12 = (signed char)93;
signed char var_13 = (signed char)-43;
short var_14 = (short)2805;
short var_15 = (short)-6199;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
