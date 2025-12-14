#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15548768214000272295ULL;
short var_2 = (short)-31124;
unsigned int var_5 = 2754595991U;
_Bool var_7 = (_Bool)1;
short var_11 = (short)4410;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)28208;
long long int var_16 = -389939834603938373LL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 607658282U;
unsigned long long int var_19 = 16494365776072839683ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
