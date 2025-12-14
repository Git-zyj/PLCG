#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17784598782898314045ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 15313549599651766660ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-30429;
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
