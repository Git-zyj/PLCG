#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2091078982971608687LL;
long long int var_3 = 7408296183606614190LL;
unsigned long long int var_4 = 597740846206987982ULL;
unsigned long long int var_5 = 8415960147897322800ULL;
signed char var_11 = (signed char)42;
signed char var_12 = (signed char)107;
int zero = 0;
long long int var_14 = -7371976404131121210LL;
int var_15 = -1150754848;
int var_16 = 288298570;
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
