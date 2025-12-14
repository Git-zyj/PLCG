#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 3857299996921308005LL;
unsigned short var_2 = (unsigned short)11002;
int var_5 = -1823085008;
short var_12 = (short)19697;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)13145;
long long int var_19 = -6845444524581120637LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
