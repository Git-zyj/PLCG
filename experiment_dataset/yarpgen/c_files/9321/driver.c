#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8875922964620946881LL;
long long int var_1 = 3482614076723062991LL;
unsigned long long int var_5 = 10695800389000343953ULL;
int var_6 = -1689882321;
int zero = 0;
int var_10 = 550419506;
unsigned long long int var_11 = 484649708703823130ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
