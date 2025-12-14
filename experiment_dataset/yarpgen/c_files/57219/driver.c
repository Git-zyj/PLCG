#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1816478940U;
short var_13 = (short)-6049;
int var_17 = 1175703575;
int zero = 0;
unsigned short var_18 = (unsigned short)35961;
short var_19 = (short)19514;
unsigned short var_20 = (unsigned short)52499;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
