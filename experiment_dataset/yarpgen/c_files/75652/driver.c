#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1813137497U;
unsigned short var_2 = (unsigned short)19522;
short var_5 = (short)104;
int var_14 = -339433795;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -1756044238;
void init() {
}

void checksum() {
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
