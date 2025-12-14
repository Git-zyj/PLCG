#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2570148230354694825ULL;
signed char var_4 = (signed char)-19;
unsigned int var_6 = 3864483214U;
signed char var_7 = (signed char)-64;
unsigned short var_11 = (unsigned short)47157;
unsigned long long int var_12 = 14464917316963408503ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)129;
unsigned short var_15 = (unsigned short)5175;
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
