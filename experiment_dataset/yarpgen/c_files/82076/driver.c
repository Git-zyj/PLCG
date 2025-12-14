#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1624270873;
long long int var_5 = 5565466444954580421LL;
unsigned short var_6 = (unsigned short)6450;
int var_10 = -1346564387;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 459279833;
short var_14 = (short)-26906;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
