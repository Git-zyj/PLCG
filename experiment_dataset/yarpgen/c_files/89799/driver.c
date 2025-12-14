#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -955242034;
int var_3 = -128821528;
int var_4 = -63191734;
_Bool var_5 = (_Bool)0;
int var_8 = -488349683;
_Bool var_13 = (_Bool)1;
short var_15 = (short)3871;
int zero = 0;
int var_16 = 1987703602;
signed char var_17 = (signed char)52;
void init() {
}

void checksum() {
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
