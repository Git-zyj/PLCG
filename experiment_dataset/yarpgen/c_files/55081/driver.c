#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5074;
int var_6 = -463239234;
unsigned long long int var_10 = 12063282771963325570ULL;
unsigned int var_11 = 520355236U;
short var_12 = (short)26891;
signed char var_14 = (signed char)-99;
short var_15 = (short)-9587;
int zero = 0;
short var_16 = (short)-4264;
short var_17 = (short)-20249;
unsigned long long int var_18 = 9257182679904311023ULL;
unsigned char var_19 = (unsigned char)72;
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
