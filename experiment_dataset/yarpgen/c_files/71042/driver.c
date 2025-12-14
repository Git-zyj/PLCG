#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)196;
unsigned int var_4 = 1217273462U;
short var_13 = (short)30301;
signed char var_14 = (signed char)41;
int zero = 0;
unsigned short var_15 = (unsigned short)50627;
signed char var_16 = (signed char)30;
unsigned long long int var_17 = 17538377290004874112ULL;
signed char var_18 = (signed char)105;
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
