#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)86;
short var_3 = (short)28229;
_Bool var_6 = (_Bool)1;
int var_11 = 918343817;
int zero = 0;
signed char var_12 = (signed char)18;
unsigned long long int var_13 = 10075008224817310048ULL;
unsigned char var_14 = (unsigned char)14;
unsigned char var_15 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
