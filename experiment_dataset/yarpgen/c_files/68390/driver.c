#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4216259936U;
unsigned char var_3 = (unsigned char)85;
signed char var_4 = (signed char)66;
unsigned short var_5 = (unsigned short)61225;
int var_7 = -1438306319;
int var_8 = -1657230475;
unsigned char var_10 = (unsigned char)233;
unsigned char var_12 = (unsigned char)131;
int zero = 0;
unsigned char var_13 = (unsigned char)68;
unsigned char var_14 = (unsigned char)1;
unsigned char var_15 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
