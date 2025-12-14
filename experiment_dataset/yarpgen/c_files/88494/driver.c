#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
short var_8 = (short)18587;
signed char var_10 = (signed char)75;
unsigned short var_11 = (unsigned short)65144;
_Bool var_13 = (_Bool)1;
unsigned int var_17 = 1369233690U;
int zero = 0;
unsigned char var_20 = (unsigned char)239;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)32427;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
