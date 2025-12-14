#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)48;
unsigned int var_5 = 2968342470U;
unsigned int var_11 = 3005992726U;
int zero = 0;
long long int var_12 = -4641145552224595745LL;
unsigned long long int var_13 = 15735168896678626052ULL;
long long int var_14 = -4904886094989246059LL;
short var_15 = (short)-32555;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
