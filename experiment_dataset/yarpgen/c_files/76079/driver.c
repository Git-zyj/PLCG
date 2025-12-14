#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35178;
long long int var_4 = -3332838575898033041LL;
long long int var_6 = -4157688130849971297LL;
unsigned char var_8 = (unsigned char)79;
unsigned char var_11 = (unsigned char)65;
unsigned int var_12 = 3802170645U;
unsigned short var_14 = (unsigned short)14509;
unsigned int var_16 = 1790973940U;
int zero = 0;
int var_17 = -940310295;
long long int var_18 = 2854874913406219953LL;
unsigned short var_19 = (unsigned short)63823;
short var_20 = (short)-2528;
unsigned int var_21 = 2238775856U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
