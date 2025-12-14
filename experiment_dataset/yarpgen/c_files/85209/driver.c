#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15931;
int var_1 = -1636103949;
unsigned long long int var_2 = 13857150322987619043ULL;
_Bool var_3 = (_Bool)0;
int var_4 = 271988522;
signed char var_7 = (signed char)-13;
unsigned long long int var_8 = 16435690726929790026ULL;
int zero = 0;
signed char var_10 = (signed char)-119;
signed char var_11 = (signed char)61;
unsigned int var_12 = 1032725725U;
unsigned short var_13 = (unsigned short)48920;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
