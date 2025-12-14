#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3080653716U;
short var_7 = (short)-4780;
unsigned int var_8 = 3634376561U;
unsigned int var_12 = 2208892698U;
int zero = 0;
long long int var_15 = 6662626666023307551LL;
unsigned int var_16 = 615440132U;
short var_17 = (short)-25700;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
