#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1414505443;
_Bool var_8 = (_Bool)1;
unsigned char var_14 = (unsigned char)12;
int zero = 0;
unsigned short var_19 = (unsigned short)63628;
unsigned short var_20 = (unsigned short)29376;
short var_21 = (short)873;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
