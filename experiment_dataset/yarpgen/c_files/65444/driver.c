#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-122;
unsigned long long int var_2 = 11204444163760873698ULL;
unsigned int var_6 = 2268018306U;
unsigned long long int var_7 = 6888133078522788171ULL;
short var_9 = (short)-10420;
unsigned int var_10 = 461595535U;
unsigned char var_12 = (unsigned char)115;
unsigned char var_13 = (unsigned char)234;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)165;
unsigned long long int var_16 = 7114271781228042748ULL;
unsigned long long int var_17 = 11221984124334235298ULL;
unsigned long long int var_18 = 2959529087428748392ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
