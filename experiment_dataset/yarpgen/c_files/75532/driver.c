#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27205;
unsigned char var_5 = (unsigned char)134;
short var_9 = (short)2773;
unsigned char var_11 = (unsigned char)173;
unsigned long long int var_13 = 17682795771140157659ULL;
unsigned long long int var_14 = 17268428417170372401ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)54;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)184;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
