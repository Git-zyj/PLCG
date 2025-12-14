#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6865746689936048175LL;
unsigned long long int var_3 = 6049067655802709507ULL;
unsigned int var_4 = 1494149937U;
short var_6 = (short)-28901;
short var_7 = (short)14086;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2176197642U;
short var_12 = (short)8234;
long long int var_13 = 5210030886607592628LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
