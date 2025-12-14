#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)102;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)15503;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)126;
unsigned short var_13 = (unsigned short)33028;
unsigned long long int var_14 = 7440653799863475318ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)59276;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
