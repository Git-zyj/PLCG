#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5823539130257442284ULL;
unsigned int var_13 = 1558909682U;
int var_19 = 724140739;
int zero = 0;
unsigned int var_20 = 3753740164U;
unsigned long long int var_21 = 2679015469085334171ULL;
unsigned long long int var_22 = 14161226944659640900ULL;
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
