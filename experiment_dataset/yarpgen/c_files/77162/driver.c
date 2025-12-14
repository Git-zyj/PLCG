#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1872131539039653075LL;
_Bool var_1 = (_Bool)0;
long long int var_5 = 2389437829689861642LL;
unsigned short var_6 = (unsigned short)49938;
unsigned int var_7 = 3993502222U;
int var_8 = 1963142828;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-30149;
int zero = 0;
unsigned int var_12 = 1795925972U;
signed char var_13 = (signed char)113;
unsigned long long int var_14 = 7214929784464765704ULL;
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
