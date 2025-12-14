#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3315294269U;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)42131;
int zero = 0;
unsigned int var_12 = 3047558624U;
long long int var_13 = -1298315576218201250LL;
int var_14 = 1881696821;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
