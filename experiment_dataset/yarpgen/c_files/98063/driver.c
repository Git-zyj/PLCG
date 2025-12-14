#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)96;
int var_5 = -1657137323;
unsigned char var_7 = (unsigned char)186;
int var_9 = 1865152762;
int zero = 0;
signed char var_12 = (signed char)-72;
unsigned short var_13 = (unsigned short)13392;
unsigned int var_14 = 669935668U;
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
