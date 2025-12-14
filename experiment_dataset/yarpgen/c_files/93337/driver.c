#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3620962271U;
unsigned int var_5 = 681855792U;
unsigned int var_6 = 1830913867U;
short var_11 = (short)-1479;
long long int var_12 = 1480333958149150272LL;
unsigned int var_15 = 3890902928U;
int var_16 = -68695370;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 2027941076;
short var_22 = (short)27445;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
