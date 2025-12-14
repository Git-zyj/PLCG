#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4142882133U;
signed char var_15 = (signed char)51;
int var_18 = 230434459;
int zero = 0;
unsigned long long int var_19 = 14477690453005570926ULL;
unsigned int var_20 = 1857769374U;
signed char var_21 = (signed char)55;
unsigned short var_22 = (unsigned short)36753;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
