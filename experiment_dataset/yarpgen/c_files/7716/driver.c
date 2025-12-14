#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8808359189389757858ULL;
signed char var_11 = (signed char)-85;
long long int var_13 = -2863386311386048488LL;
int zero = 0;
unsigned long long int var_15 = 10205603567971711939ULL;
unsigned int var_16 = 2630981969U;
void init() {
}

void checksum() {
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
