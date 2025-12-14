#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)24809;
_Bool var_6 = (_Bool)1;
short var_12 = (short)-15098;
unsigned short var_17 = (unsigned short)48706;
int zero = 0;
unsigned char var_19 = (unsigned char)100;
signed char var_20 = (signed char)126;
unsigned char var_21 = (unsigned char)48;
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
