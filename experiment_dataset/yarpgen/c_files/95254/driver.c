#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1972798183U;
short var_10 = (short)8362;
unsigned short var_11 = (unsigned short)26364;
long long int var_12 = 8284060344975522470LL;
unsigned int var_15 = 3179690189U;
int zero = 0;
short var_16 = (short)-31305;
long long int var_17 = -5692251138951537122LL;
void init() {
}

void checksum() {
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
