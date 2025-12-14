#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 192170570;
unsigned char var_2 = (unsigned char)221;
unsigned int var_3 = 379030172U;
short var_5 = (short)17325;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)43199;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)40922;
signed char var_16 = (signed char)92;
int var_19 = -1502550735;
int zero = 0;
unsigned long long int var_20 = 16901874514767460003ULL;
short var_21 = (short)-14588;
unsigned int var_22 = 2211817584U;
short var_23 = (short)-28132;
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
