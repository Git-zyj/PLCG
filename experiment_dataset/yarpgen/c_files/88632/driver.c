#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -919428859;
unsigned long long int var_3 = 3551982552462671125ULL;
long long int var_4 = 440783797448283358LL;
int var_5 = 1278452249;
int var_6 = 1476366936;
int var_7 = 431786768;
signed char var_8 = (signed char)89;
unsigned int var_10 = 872996810U;
unsigned long long int var_11 = 877994443893972270ULL;
int var_12 = 622442015;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int var_15 = 819819049;
unsigned int var_16 = 2615992817U;
int var_17 = 83849746;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
