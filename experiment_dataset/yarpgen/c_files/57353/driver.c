#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15746444473597796321ULL;
unsigned short var_2 = (unsigned short)23642;
long long int var_3 = 4210032408146353918LL;
unsigned long long int var_6 = 11839381749583347562ULL;
signed char var_7 = (signed char)31;
short var_8 = (short)-607;
signed char var_9 = (signed char)49;
int zero = 0;
signed char var_12 = (signed char)-51;
unsigned short var_13 = (unsigned short)56008;
short var_14 = (short)-7204;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
