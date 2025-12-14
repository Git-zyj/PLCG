#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59640;
short var_2 = (short)-2171;
unsigned int var_3 = 899797161U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)63754;
long long int var_6 = 7567054050295028775LL;
unsigned short var_7 = (unsigned short)27013;
unsigned short var_10 = (unsigned short)38073;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_15 = (short)-26319;
_Bool var_16 = (_Bool)0;
long long int var_17 = 582967084294855756LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
