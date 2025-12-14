#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8139333974819275737ULL;
signed char var_4 = (signed char)86;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-79;
unsigned short var_7 = (unsigned short)3119;
unsigned char var_8 = (unsigned char)239;
int var_10 = -1524379568;
unsigned short var_11 = (unsigned short)17802;
signed char var_12 = (signed char)117;
unsigned int var_15 = 762254804U;
int zero = 0;
unsigned short var_17 = (unsigned short)47201;
int var_18 = -591099382;
int var_19 = -1008378766;
unsigned char var_20 = (unsigned char)133;
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
