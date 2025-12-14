#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2188962866U;
_Bool var_4 = (_Bool)0;
signed char var_10 = (signed char)-121;
unsigned char var_12 = (unsigned char)173;
int zero = 0;
short var_15 = (short)-453;
unsigned char var_16 = (unsigned char)42;
void init() {
}

void checksum() {
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
