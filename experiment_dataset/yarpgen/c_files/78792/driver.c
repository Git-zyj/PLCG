#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)65120;
long long int var_6 = 1312226510468933581LL;
unsigned int var_7 = 2768377401U;
unsigned int var_12 = 4104825823U;
signed char var_13 = (signed char)12;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-7608;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
