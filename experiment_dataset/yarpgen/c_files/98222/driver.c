#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11464232755090305540ULL;
unsigned int var_12 = 385579843U;
unsigned int var_14 = 2563455289U;
int zero = 0;
unsigned short var_15 = (unsigned short)31121;
short var_16 = (short)-30624;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
