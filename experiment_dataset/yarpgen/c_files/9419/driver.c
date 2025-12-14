#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12303914625041491845ULL;
unsigned int var_4 = 1602300330U;
signed char var_5 = (signed char)-54;
short var_7 = (short)-22172;
short var_12 = (short)1675;
int zero = 0;
long long int var_15 = 7533207617786060669LL;
short var_16 = (short)-23795;
unsigned long long int var_17 = 10174455651118821447ULL;
short var_18 = (short)-14090;
unsigned long long int var_19 = 8656602688976946967ULL;
unsigned int var_20 = 3052609975U;
unsigned short var_21 = (unsigned short)42536;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
