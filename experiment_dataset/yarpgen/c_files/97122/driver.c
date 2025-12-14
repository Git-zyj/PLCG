#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1449230543U;
unsigned long long int var_2 = 18208423867411050890ULL;
long long int var_4 = 7076436661216096693LL;
unsigned char var_6 = (unsigned char)232;
long long int var_7 = 5524127802812769005LL;
long long int var_8 = -2444768453986346123LL;
int var_12 = 994638254;
unsigned long long int var_14 = 11650900905960224439ULL;
signed char var_15 = (signed char)6;
int zero = 0;
unsigned char var_16 = (unsigned char)146;
short var_17 = (short)-4673;
short var_18 = (short)7276;
long long int var_19 = -2071253318406075107LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
