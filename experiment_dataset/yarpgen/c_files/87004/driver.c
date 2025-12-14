#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9495;
signed char var_1 = (signed char)96;
unsigned int var_2 = 1355066097U;
int zero = 0;
unsigned int var_13 = 3162012770U;
long long int var_14 = -9179588791574074454LL;
void init() {
}

void checksum() {
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
