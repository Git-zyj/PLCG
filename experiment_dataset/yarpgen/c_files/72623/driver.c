#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-21281;
short var_8 = (short)23873;
int var_10 = 1065870788;
unsigned char var_13 = (unsigned char)22;
signed char var_14 = (signed char)-66;
int zero = 0;
short var_15 = (short)4651;
unsigned int var_16 = 1328702484U;
unsigned int var_17 = 1421269999U;
signed char var_18 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
