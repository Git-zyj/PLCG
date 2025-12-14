#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)34;
signed char var_5 = (signed char)29;
unsigned short var_6 = (unsigned short)46356;
unsigned short var_8 = (unsigned short)3459;
unsigned short var_9 = (unsigned short)63195;
unsigned short var_11 = (unsigned short)35171;
unsigned short var_13 = (unsigned short)51815;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)47;
signed char var_17 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
