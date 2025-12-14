#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14554912632263463177ULL;
signed char var_11 = (signed char)-34;
long long int var_12 = 5070885924803475996LL;
int zero = 0;
unsigned int var_14 = 2485524986U;
unsigned int var_15 = 944630288U;
void init() {
}

void checksum() {
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
