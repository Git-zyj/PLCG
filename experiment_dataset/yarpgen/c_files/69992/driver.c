#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10412625333232451137ULL;
unsigned long long int var_4 = 3945437031978714562ULL;
int zero = 0;
unsigned int var_14 = 1419339708U;
long long int var_15 = -3274502885034159834LL;
long long int var_16 = 4808868108302512032LL;
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
