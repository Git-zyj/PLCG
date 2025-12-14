#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1246304942U;
unsigned short var_3 = (unsigned short)25619;
unsigned int var_5 = 1040354035U;
_Bool var_6 = (_Bool)0;
long long int var_14 = 1612407376288497129LL;
unsigned short var_15 = (unsigned short)58146;
int zero = 0;
int var_17 = -1266740509;
unsigned long long int var_18 = 9845839644789209814ULL;
unsigned int var_19 = 3106502616U;
unsigned short var_20 = (unsigned short)54545;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
