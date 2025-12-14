#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)105;
_Bool var_7 = (_Bool)1;
short var_8 = (short)24542;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-562;
int zero = 0;
signed char var_13 = (signed char)-37;
short var_14 = (short)-974;
short var_15 = (short)10398;
short var_16 = (short)23004;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
