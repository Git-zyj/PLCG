#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13492274775615442431ULL;
unsigned long long int var_5 = 1093349700708168134ULL;
unsigned long long int var_7 = 9055911420101199755ULL;
unsigned long long int var_13 = 3699005137042957413ULL;
unsigned long long int var_15 = 7876802056442226522ULL;
int zero = 0;
unsigned long long int var_18 = 13979456573357864205ULL;
unsigned long long int var_19 = 5673041768567381210ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
