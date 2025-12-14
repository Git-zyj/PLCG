#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-6387;
unsigned int var_8 = 3927105367U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)234;
long long int var_15 = -1170021034251684826LL;
int zero = 0;
signed char var_16 = (signed char)-127;
signed char var_17 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
