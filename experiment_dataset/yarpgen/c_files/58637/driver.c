#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37633;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 400925757U;
unsigned int var_4 = 832114054U;
unsigned long long int var_8 = 17869036043794933492ULL;
unsigned short var_10 = (unsigned short)60327;
int zero = 0;
unsigned short var_12 = (unsigned short)6667;
unsigned int var_13 = 2043934244U;
unsigned int var_14 = 214952262U;
unsigned int var_15 = 537347517U;
signed char var_16 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
