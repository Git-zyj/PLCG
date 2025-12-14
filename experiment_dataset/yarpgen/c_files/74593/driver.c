#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2698122718U;
unsigned short var_3 = (unsigned short)14834;
long long int var_4 = -8840746693933261992LL;
unsigned int var_6 = 3861206712U;
int zero = 0;
signed char var_11 = (signed char)105;
int var_12 = 568676112;
long long int var_13 = 6104046640507757688LL;
unsigned short var_14 = (unsigned short)20308;
int var_15 = 1828723994;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
