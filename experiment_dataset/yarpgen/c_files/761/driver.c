#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28638;
signed char var_4 = (signed char)123;
signed char var_6 = (signed char)-92;
unsigned long long int var_9 = 9948961791350973369ULL;
unsigned long long int var_15 = 12568161843491044640ULL;
int zero = 0;
signed char var_16 = (signed char)82;
signed char var_17 = (signed char)56;
unsigned int var_18 = 175720025U;
short var_19 = (short)-11636;
long long int var_20 = 5579000063604699320LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
