#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)189;
unsigned char var_4 = (unsigned char)69;
_Bool var_5 = (_Bool)1;
int var_6 = -776119602;
unsigned short var_7 = (unsigned short)6749;
unsigned short var_10 = (unsigned short)58786;
short var_12 = (short)-23414;
short var_15 = (short)-1717;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)40038;
short var_18 = (short)32646;
int var_19 = 1824291425;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
