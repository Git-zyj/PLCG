#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)-11361;
unsigned int var_8 = 1947853502U;
_Bool var_11 = (_Bool)1;
int var_12 = 1680583203;
unsigned char var_14 = (unsigned char)212;
int zero = 0;
int var_17 = 872905600;
unsigned long long int var_18 = 10455235023486383168ULL;
unsigned char var_19 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
