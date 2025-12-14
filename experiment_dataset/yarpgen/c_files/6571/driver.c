#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51856;
unsigned short var_3 = (unsigned short)45134;
unsigned int var_6 = 646445164U;
unsigned char var_11 = (unsigned char)159;
unsigned short var_13 = (unsigned short)61824;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)69;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)70;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-15875;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
