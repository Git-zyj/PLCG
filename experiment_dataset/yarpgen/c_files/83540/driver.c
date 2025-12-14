#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6013;
short var_6 = (short)-3597;
unsigned long long int var_11 = 17209360494084233425ULL;
short var_13 = (short)-3672;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)122;
unsigned char var_21 = (unsigned char)198;
int var_22 = -1931379741;
short var_23 = (short)32456;
signed char var_24 = (signed char)-32;
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
