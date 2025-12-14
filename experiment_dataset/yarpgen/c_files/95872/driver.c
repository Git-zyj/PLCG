#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1467741332U;
unsigned short var_6 = (unsigned short)60980;
int var_8 = 1706205023;
unsigned int var_12 = 2312020955U;
unsigned char var_15 = (unsigned char)14;
int zero = 0;
unsigned int var_16 = 439631048U;
int var_17 = -578171818;
unsigned char var_18 = (unsigned char)162;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)28870;
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
