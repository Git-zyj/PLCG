#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16200551909703395727ULL;
unsigned char var_1 = (unsigned char)242;
signed char var_5 = (signed char)66;
unsigned char var_7 = (unsigned char)177;
unsigned int var_9 = 1796709645U;
unsigned char var_12 = (unsigned char)140;
int zero = 0;
unsigned long long int var_14 = 8027234696907286210ULL;
signed char var_15 = (signed char)-21;
unsigned int var_16 = 3642129440U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
