#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1145867085;
unsigned char var_6 = (unsigned char)115;
unsigned short var_10 = (unsigned short)57945;
unsigned short var_15 = (unsigned short)8863;
long long int var_16 = 5124685935871347101LL;
int zero = 0;
unsigned short var_17 = (unsigned short)12775;
unsigned short var_18 = (unsigned short)59393;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
