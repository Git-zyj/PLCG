#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 2152302795542200851ULL;
long long int var_8 = 8455688608948179080LL;
short var_17 = (short)29979;
unsigned char var_19 = (unsigned char)228;
int zero = 0;
int var_20 = -670073374;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 12243046011633101214ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
