#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17012682454053563179ULL;
signed char var_6 = (signed char)117;
unsigned int var_8 = 2704974293U;
unsigned int var_9 = 3135869226U;
unsigned int var_10 = 32328198U;
unsigned short var_12 = (unsigned short)30685;
int zero = 0;
signed char var_15 = (signed char)-36;
unsigned short var_16 = (unsigned short)59896;
short var_17 = (short)-21705;
signed char var_18 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
