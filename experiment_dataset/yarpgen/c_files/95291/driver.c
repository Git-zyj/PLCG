#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
short var_1 = (short)13857;
unsigned short var_6 = (unsigned short)12267;
short var_12 = (short)5225;
short var_15 = (short)29901;
signed char var_18 = (signed char)-32;
int zero = 0;
unsigned short var_19 = (unsigned short)110;
unsigned short var_20 = (unsigned short)28847;
void init() {
}

void checksum() {
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
