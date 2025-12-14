#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5565814072165475884ULL;
unsigned char var_5 = (unsigned char)179;
signed char var_13 = (signed char)14;
int zero = 0;
int var_20 = -926976569;
unsigned int var_21 = 2471229086U;
long long int var_22 = 417683657923920971LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
