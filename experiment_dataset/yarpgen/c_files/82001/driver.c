#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 826411775U;
unsigned short var_3 = (unsigned short)15459;
int var_4 = 1582806661;
_Bool var_7 = (_Bool)1;
long long int var_8 = 4392353655976037220LL;
unsigned int var_9 = 1590090071U;
short var_10 = (short)-30747;
int zero = 0;
int var_12 = 407681334;
long long int var_13 = -5327386653708568660LL;
unsigned short var_14 = (unsigned short)7205;
unsigned int var_15 = 1322388855U;
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
