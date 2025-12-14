#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_5 = (short)10721;
long long int var_6 = -7587549805626973733LL;
unsigned int var_7 = 3517252678U;
_Bool var_8 = (_Bool)1;
long long int var_9 = 7724725006580761895LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-11002;
short var_12 = (short)14340;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
