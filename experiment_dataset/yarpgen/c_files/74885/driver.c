#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2392347310516833898LL;
signed char var_6 = (signed char)-87;
int var_7 = -1340938115;
unsigned short var_12 = (unsigned short)60070;
unsigned int var_14 = 3928848518U;
int zero = 0;
unsigned int var_17 = 3301910071U;
unsigned long long int var_18 = 7993443267335084578ULL;
unsigned int var_19 = 1598874507U;
short var_20 = (short)22239;
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
