#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4858534001368754356LL;
unsigned int var_8 = 1740262086U;
short var_12 = (short)-27577;
short var_13 = (short)-16282;
short var_14 = (short)-7728;
int zero = 0;
unsigned short var_17 = (unsigned short)9761;
int var_18 = -1802584196;
int var_19 = -1994063564;
int var_20 = -1683730570;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
