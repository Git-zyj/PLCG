#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5555216920832272666LL;
unsigned short var_4 = (unsigned short)52851;
unsigned long long int var_5 = 17754210100441960838ULL;
signed char var_6 = (signed char)125;
long long int var_10 = 5584197744911668605LL;
int var_11 = -1548368016;
long long int var_14 = 43218027178925984LL;
signed char var_15 = (signed char)48;
int zero = 0;
signed char var_16 = (signed char)-48;
short var_17 = (short)-31862;
unsigned int var_18 = 411233783U;
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
