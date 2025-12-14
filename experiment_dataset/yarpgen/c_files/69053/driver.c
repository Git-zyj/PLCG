#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_5 = (short)13028;
signed char var_6 = (signed char)72;
unsigned char var_8 = (unsigned char)234;
int zero = 0;
unsigned long long int var_11 = 18304762868542524895ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)39619;
_Bool var_14 = (_Bool)0;
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
