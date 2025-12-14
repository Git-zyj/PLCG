#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_7 = -1783565815448182054LL;
unsigned char var_8 = (unsigned char)167;
unsigned char var_9 = (unsigned char)233;
int var_10 = -1102326841;
unsigned short var_11 = (unsigned short)15120;
unsigned long long int var_15 = 5570747903637145698ULL;
int zero = 0;
unsigned long long int var_17 = 7443893329860098192ULL;
int var_18 = -2050004895;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
