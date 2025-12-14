#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)95;
unsigned char var_7 = (unsigned char)211;
short var_14 = (short)-22098;
int zero = 0;
unsigned char var_19 = (unsigned char)116;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 908729723U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
