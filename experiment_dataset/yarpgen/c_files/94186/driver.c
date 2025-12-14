#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1196667255;
signed char var_10 = (signed char)91;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2538558001U;
int zero = 0;
int var_15 = -1845813643;
unsigned char var_16 = (unsigned char)107;
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
