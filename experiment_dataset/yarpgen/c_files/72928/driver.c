#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6987928565665785905LL;
short var_3 = (short)32022;
signed char var_11 = (signed char)79;
int zero = 0;
unsigned short var_14 = (unsigned short)65128;
short var_15 = (short)-18988;
unsigned long long int var_16 = 7701573527862454724ULL;
unsigned short var_17 = (unsigned short)8416;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
