#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1765;
long long int var_1 = -8990407294086434901LL;
unsigned long long int var_4 = 15911412790280827955ULL;
unsigned short var_7 = (unsigned short)9562;
int zero = 0;
unsigned int var_12 = 2362146521U;
unsigned int var_13 = 3038637926U;
unsigned int var_14 = 421275032U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
