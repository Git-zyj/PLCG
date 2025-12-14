#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-19674;
unsigned short var_11 = (unsigned short)31207;
short var_12 = (short)-3496;
int var_15 = 1235453431;
int var_16 = 247493067;
unsigned int var_18 = 3052767596U;
unsigned char var_19 = (unsigned char)187;
int zero = 0;
unsigned int var_20 = 1183226347U;
signed char var_21 = (signed char)-123;
short var_22 = (short)-2982;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
