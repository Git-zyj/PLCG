#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2185055678255389789LL;
signed char var_1 = (signed char)-64;
signed char var_3 = (signed char)-110;
short var_4 = (short)17135;
long long int var_5 = -5807100665396068701LL;
unsigned short var_7 = (unsigned short)10160;
signed char var_8 = (signed char)-58;
int var_10 = -924372354;
int zero = 0;
long long int var_11 = -3655204306640458636LL;
unsigned char var_12 = (unsigned char)56;
signed char var_13 = (signed char)66;
short var_14 = (short)-17656;
unsigned char var_15 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
