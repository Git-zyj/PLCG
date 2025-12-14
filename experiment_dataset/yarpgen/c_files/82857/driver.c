#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 3571461924553599582ULL;
signed char var_7 = (signed char)20;
unsigned int var_14 = 1910478915U;
int zero = 0;
unsigned int var_15 = 450417911U;
int var_16 = 1123258037;
unsigned long long int var_17 = 11128158636992098893ULL;
int var_18 = -2146651582;
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
