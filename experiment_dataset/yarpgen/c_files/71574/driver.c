#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2493676197587748764LL;
unsigned int var_6 = 681877101U;
signed char var_11 = (signed char)35;
signed char var_12 = (signed char)-125;
int zero = 0;
int var_13 = -904650079;
signed char var_14 = (signed char)39;
int var_15 = -487745548;
signed char var_16 = (signed char)87;
signed char var_17 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
