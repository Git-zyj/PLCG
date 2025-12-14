#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37997;
short var_1 = (short)-29496;
unsigned short var_2 = (unsigned short)52309;
unsigned char var_6 = (unsigned char)173;
unsigned short var_8 = (unsigned short)21655;
short var_9 = (short)20190;
int zero = 0;
unsigned int var_12 = 1179848225U;
unsigned char var_13 = (unsigned char)186;
unsigned short var_14 = (unsigned short)17672;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
