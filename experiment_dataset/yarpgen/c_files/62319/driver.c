#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1055605636;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-7615;
int var_10 = -1178820066;
int var_11 = 1712454534;
short var_13 = (short)26930;
unsigned int var_14 = 3476159985U;
long long int var_16 = -692038644535468856LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 10756635766557194149ULL;
unsigned char var_20 = (unsigned char)193;
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
