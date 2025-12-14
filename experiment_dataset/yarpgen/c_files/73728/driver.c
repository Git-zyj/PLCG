#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
unsigned long long int var_4 = 7927466039280345476ULL;
unsigned int var_5 = 2146194672U;
unsigned long long int var_7 = 9692709554413023138ULL;
unsigned short var_8 = (unsigned short)48422;
unsigned long long int var_11 = 12899404355420854526ULL;
signed char var_12 = (signed char)-26;
int zero = 0;
unsigned short var_14 = (unsigned short)62482;
unsigned char var_15 = (unsigned char)131;
unsigned short var_16 = (unsigned short)42825;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
