#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31693;
signed char var_2 = (signed char)-94;
unsigned short var_5 = (unsigned short)11653;
unsigned char var_9 = (unsigned char)43;
unsigned short var_10 = (unsigned short)35003;
int zero = 0;
short var_15 = (short)-4214;
unsigned short var_16 = (unsigned short)52721;
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
