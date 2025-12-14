#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2645896484769769135LL;
short var_3 = (short)-10882;
long long int var_4 = -3345111860172463621LL;
int var_5 = -2098245770;
unsigned char var_15 = (unsigned char)140;
unsigned long long int var_17 = 10936951685249878478ULL;
int zero = 0;
unsigned int var_20 = 171357978U;
int var_21 = -705279421;
int var_22 = -1713765511;
long long int var_23 = 6596858506078541191LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
