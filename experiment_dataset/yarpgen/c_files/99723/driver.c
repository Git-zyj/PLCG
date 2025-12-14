#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1620351761905468182ULL;
signed char var_3 = (signed char)0;
short var_5 = (short)26390;
long long int var_6 = -7073538860547982676LL;
short var_8 = (short)-3793;
long long int var_9 = -2582434577717265687LL;
unsigned char var_13 = (unsigned char)162;
int zero = 0;
signed char var_15 = (signed char)-6;
unsigned long long int var_16 = 2093669162449279238ULL;
void init() {
}

void checksum() {
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
