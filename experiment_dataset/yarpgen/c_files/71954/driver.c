#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)25721;
int var_2 = 775312593;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)473;
int var_5 = 662269648;
short var_6 = (short)-6085;
_Bool var_7 = (_Bool)0;
short var_8 = (short)13976;
unsigned int var_9 = 3615222205U;
unsigned short var_10 = (unsigned short)54730;
int zero = 0;
long long int var_11 = 1555975412587440673LL;
unsigned int var_12 = 2039877286U;
int var_13 = -781955213;
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
