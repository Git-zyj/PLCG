#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)171;
unsigned char var_4 = (unsigned char)10;
int var_6 = 1001709171;
unsigned short var_9 = (unsigned short)10717;
short var_10 = (short)21540;
int zero = 0;
unsigned long long int var_14 = 14487344823697569937ULL;
unsigned char var_15 = (unsigned char)169;
signed char var_16 = (signed char)73;
unsigned int var_17 = 1151040183U;
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
