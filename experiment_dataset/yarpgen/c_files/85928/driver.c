#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = -643701239;
unsigned char var_6 = (unsigned char)68;
short var_14 = (short)-12024;
unsigned int var_16 = 434688124U;
signed char var_18 = (signed char)91;
int zero = 0;
int var_20 = -639235588;
unsigned char var_21 = (unsigned char)57;
void init() {
}

void checksum() {
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
