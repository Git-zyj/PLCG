#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-79;
short var_3 = (short)-1566;
int var_5 = -2005353352;
signed char var_8 = (signed char)85;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)20173;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
