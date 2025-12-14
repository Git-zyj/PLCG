#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 415843530;
short var_1 = (short)-22532;
signed char var_5 = (signed char)-6;
short var_8 = (short)23522;
long long int var_9 = 6554544277085895267LL;
int zero = 0;
unsigned int var_12 = 828925035U;
int var_13 = -1166673241;
int var_14 = -498376819;
void init() {
}

void checksum() {
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
