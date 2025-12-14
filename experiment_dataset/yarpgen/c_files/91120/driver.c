#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23205;
long long int var_5 = -3647462231204488618LL;
unsigned char var_9 = (unsigned char)161;
int zero = 0;
unsigned long long int var_11 = 17109871212979675911ULL;
unsigned long long int var_12 = 6824554906488565126ULL;
unsigned long long int var_13 = 6034868511104358214ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
