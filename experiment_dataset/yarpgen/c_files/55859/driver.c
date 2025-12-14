#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9810;
unsigned short var_3 = (unsigned short)46793;
int var_5 = -1332879072;
unsigned char var_11 = (unsigned char)205;
int zero = 0;
unsigned char var_14 = (unsigned char)115;
unsigned char var_15 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
