#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15994;
int var_2 = -778930582;
unsigned short var_10 = (unsigned short)30395;
long long int var_11 = -2705555551237584068LL;
int zero = 0;
unsigned char var_15 = (unsigned char)132;
unsigned char var_16 = (unsigned char)134;
short var_17 = (short)-1648;
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
