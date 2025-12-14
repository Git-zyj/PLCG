#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4144536723U;
unsigned int var_1 = 951990844U;
short var_2 = (short)-24320;
long long int var_4 = 433533668990892559LL;
unsigned long long int var_7 = 1519708344701617223ULL;
long long int var_8 = -4472673347667034364LL;
int zero = 0;
unsigned long long int var_10 = 2166394890417110296ULL;
signed char var_11 = (signed char)-41;
short var_12 = (short)29527;
long long int var_13 = -813001260536698269LL;
signed char var_14 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
