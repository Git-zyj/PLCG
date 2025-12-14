#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
signed char var_1 = (signed char)-24;
unsigned short var_4 = (unsigned short)54572;
unsigned char var_5 = (unsigned char)55;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)35348;
unsigned long long int var_9 = 764295716930192223ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 476084871U;
long long int var_14 = -4353742005248048312LL;
unsigned int var_15 = 856058911U;
int zero = 0;
unsigned int var_16 = 1967004631U;
unsigned short var_17 = (unsigned short)2468;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2202347613U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
