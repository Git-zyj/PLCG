#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37755;
int var_7 = -739811852;
_Bool var_10 = (_Bool)0;
short var_18 = (short)21746;
int zero = 0;
int var_19 = -61523514;
int var_20 = 519409130;
long long int var_21 = -1413566538173974813LL;
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
