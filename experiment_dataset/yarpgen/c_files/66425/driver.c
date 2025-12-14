#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)154;
unsigned int var_2 = 956917292U;
signed char var_3 = (signed char)-73;
unsigned int var_4 = 1396309891U;
unsigned char var_5 = (unsigned char)149;
unsigned char var_7 = (unsigned char)128;
signed char var_10 = (signed char)-73;
signed char var_12 = (signed char)-65;
unsigned char var_13 = (unsigned char)92;
signed char var_14 = (signed char)-118;
unsigned int var_15 = 608157622U;
unsigned int var_16 = 18501357U;
int zero = 0;
signed char var_19 = (signed char)119;
unsigned int var_20 = 3429308575U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
