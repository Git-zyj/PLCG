#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1884181554;
unsigned int var_6 = 2742236617U;
unsigned char var_14 = (unsigned char)203;
unsigned char var_16 = (unsigned char)47;
int zero = 0;
short var_18 = (short)27605;
unsigned int var_19 = 4236296686U;
unsigned int var_20 = 3851229403U;
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
