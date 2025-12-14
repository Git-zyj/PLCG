#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -700706213;
unsigned char var_10 = (unsigned char)35;
_Bool var_12 = (_Bool)0;
short var_17 = (short)22339;
short var_18 = (short)-2763;
int zero = 0;
unsigned short var_20 = (unsigned short)22430;
signed char var_21 = (signed char)97;
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
