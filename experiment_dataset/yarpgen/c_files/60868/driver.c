#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = 8602789199543947563LL;
_Bool var_8 = (_Bool)0;
long long int var_12 = 1248152301086231991LL;
unsigned short var_14 = (unsigned short)11996;
int zero = 0;
unsigned int var_20 = 672796324U;
int var_21 = 1168710773;
void init() {
}

void checksum() {
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
