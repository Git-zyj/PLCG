#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
unsigned long long int var_1 = 6074360772289380662ULL;
unsigned int var_7 = 2800717455U;
unsigned long long int var_8 = 1265495704803679522ULL;
unsigned int var_9 = 1132566356U;
int zero = 0;
unsigned short var_13 = (unsigned short)31255;
int var_14 = -656975402;
int var_15 = 411794234;
void init() {
}

void checksum() {
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
