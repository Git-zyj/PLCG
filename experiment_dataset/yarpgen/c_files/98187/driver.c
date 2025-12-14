#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8175907156356304022LL;
unsigned short var_3 = (unsigned short)45131;
unsigned short var_5 = (unsigned short)5270;
unsigned short var_11 = (unsigned short)61234;
int var_12 = -1691670526;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 1789297387;
signed char var_18 = (signed char)70;
short var_19 = (short)13303;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
