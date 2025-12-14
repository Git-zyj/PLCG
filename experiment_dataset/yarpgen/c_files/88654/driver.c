#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
short var_3 = (short)-12371;
unsigned short var_4 = (unsigned short)47104;
short var_9 = (short)7053;
unsigned short var_10 = (unsigned short)23521;
unsigned char var_12 = (unsigned char)224;
int zero = 0;
unsigned char var_14 = (unsigned char)14;
unsigned short var_15 = (unsigned short)19727;
unsigned char var_16 = (unsigned char)249;
int var_17 = -258200428;
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
