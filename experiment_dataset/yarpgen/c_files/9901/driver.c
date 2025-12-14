#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 375664506;
int var_2 = 488441144;
short var_4 = (short)21391;
int zero = 0;
signed char var_11 = (signed char)6;
unsigned short var_12 = (unsigned short)49549;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)24722;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
