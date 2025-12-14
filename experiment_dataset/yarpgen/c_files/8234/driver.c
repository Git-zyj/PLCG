#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3566302760U;
unsigned int var_9 = 1542781959U;
unsigned int var_11 = 453841280U;
unsigned int var_12 = 1931430195U;
int zero = 0;
unsigned int var_14 = 3943641272U;
unsigned int var_15 = 2170014067U;
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
