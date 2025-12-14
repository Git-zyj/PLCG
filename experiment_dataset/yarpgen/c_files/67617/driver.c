#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8093284135223311841ULL;
_Bool var_6 = (_Bool)0;
_Bool var_11 = (_Bool)1;
short var_14 = (short)-1731;
int zero = 0;
signed char var_16 = (signed char)-5;
_Bool var_17 = (_Bool)1;
short var_18 = (short)10077;
_Bool var_19 = (_Bool)1;
long long int var_20 = 7641232667601511215LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
