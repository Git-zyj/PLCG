#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
short var_1 = (short)-8492;
unsigned char var_3 = (unsigned char)123;
int zero = 0;
long long int var_15 = -789434775410167458LL;
unsigned short var_16 = (unsigned short)19524;
short var_17 = (short)4298;
signed char var_18 = (signed char)-17;
void init() {
}

void checksum() {
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
