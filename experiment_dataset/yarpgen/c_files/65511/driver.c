#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10258;
unsigned int var_6 = 2510721959U;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)63954;
int zero = 0;
unsigned int var_10 = 2512790681U;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)55762;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
