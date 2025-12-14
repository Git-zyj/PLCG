#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-122;
unsigned char var_5 = (unsigned char)153;
signed char var_7 = (signed char)-69;
int var_8 = -828085784;
unsigned int var_11 = 2720126737U;
int zero = 0;
signed char var_12 = (signed char)-15;
unsigned char var_13 = (unsigned char)123;
unsigned int var_14 = 284394358U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
