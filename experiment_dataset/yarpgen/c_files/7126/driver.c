#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14000269867414359574ULL;
unsigned int var_3 = 2049992066U;
unsigned int var_10 = 936450945U;
int zero = 0;
short var_18 = (short)-8176;
unsigned long long int var_19 = 13607717912907239209ULL;
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
