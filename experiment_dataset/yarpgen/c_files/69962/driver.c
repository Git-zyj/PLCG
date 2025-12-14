#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -4059332465371713076LL;
unsigned int var_2 = 4217717287U;
unsigned int var_3 = 1551025899U;
long long int var_6 = -7830585165722047061LL;
long long int var_7 = 8753657113036701450LL;
long long int var_8 = -8057029956238517256LL;
unsigned int var_10 = 1202425700U;
unsigned char var_11 = (unsigned char)198;
unsigned int var_12 = 4087422509U;
long long int var_14 = -9190733756480946518LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
