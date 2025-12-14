#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 787524650U;
unsigned short var_1 = (unsigned short)43226;
signed char var_3 = (signed char)87;
unsigned short var_4 = (unsigned short)19266;
unsigned int var_5 = 3721883337U;
signed char var_6 = (signed char)51;
unsigned long long int var_9 = 3868498203694063587ULL;
unsigned short var_11 = (unsigned short)11551;
int zero = 0;
signed char var_13 = (signed char)-62;
short var_14 = (short)9372;
signed char var_15 = (signed char)-3;
unsigned short var_16 = (unsigned short)21095;
unsigned short var_17 = (unsigned short)37394;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
