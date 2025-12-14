#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
unsigned short var_7 = (unsigned short)58460;
short var_8 = (short)29856;
int var_12 = 53628599;
unsigned char var_16 = (unsigned char)79;
int zero = 0;
unsigned long long int var_20 = 4653937843988361330ULL;
short var_21 = (short)-7479;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
