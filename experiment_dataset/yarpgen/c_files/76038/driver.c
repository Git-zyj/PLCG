#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52346;
unsigned char var_2 = (unsigned char)56;
unsigned short var_6 = (unsigned short)51525;
signed char var_7 = (signed char)-1;
unsigned char var_9 = (unsigned char)81;
unsigned char var_12 = (unsigned char)198;
unsigned char var_13 = (unsigned char)212;
signed char var_16 = (signed char)-41;
unsigned short var_17 = (unsigned short)61055;
int zero = 0;
unsigned short var_18 = (unsigned short)61667;
unsigned long long int var_19 = 5010459029824633436ULL;
signed char var_20 = (signed char)-87;
void init() {
}

void checksum() {
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
