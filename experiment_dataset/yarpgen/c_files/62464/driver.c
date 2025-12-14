#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36605;
unsigned int var_3 = 639665140U;
_Bool var_4 = (_Bool)0;
long long int var_14 = 5826219199142135647LL;
int zero = 0;
unsigned int var_16 = 4253451512U;
long long int var_17 = 270518400932968509LL;
unsigned short var_18 = (unsigned short)62648;
void init() {
}

void checksum() {
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
