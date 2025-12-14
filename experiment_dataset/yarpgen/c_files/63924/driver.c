#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4240784091U;
unsigned long long int var_14 = 11036626013503674064ULL;
int zero = 0;
unsigned long long int var_18 = 12508844112379603645ULL;
int var_19 = -246777469;
long long int var_20 = 583240468020771798LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
