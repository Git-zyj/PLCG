#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 432946848;
unsigned int var_1 = 1594477652U;
unsigned long long int var_3 = 16142996897927418989ULL;
short var_13 = (short)-13749;
int zero = 0;
unsigned char var_15 = (unsigned char)119;
short var_16 = (short)-14197;
int var_17 = -587677374;
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
