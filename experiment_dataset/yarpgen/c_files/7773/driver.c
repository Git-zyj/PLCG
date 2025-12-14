#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)219;
short var_3 = (short)30481;
int var_8 = -675471413;
unsigned char var_11 = (unsigned char)32;
unsigned char var_13 = (unsigned char)63;
int zero = 0;
short var_14 = (short)13484;
unsigned short var_15 = (unsigned short)45874;
unsigned short var_16 = (unsigned short)58625;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
