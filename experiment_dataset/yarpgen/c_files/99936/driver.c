#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2357410887U;
long long int var_3 = 4351656593353151564LL;
unsigned char var_4 = (unsigned char)179;
signed char var_6 = (signed char)52;
unsigned long long int var_8 = 3104730308062753746ULL;
unsigned int var_10 = 326793240U;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)23532;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
