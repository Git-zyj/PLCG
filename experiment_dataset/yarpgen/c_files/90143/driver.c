#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3509295500U;
long long int var_6 = 75111463399925226LL;
int var_9 = 1075987105;
long long int var_13 = -7482394074185218356LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 2204956248333019202LL;
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
