#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 610955671;
_Bool var_1 = (_Bool)0;
short var_4 = (short)29909;
unsigned long long int var_8 = 9572815440623726914ULL;
short var_9 = (short)11537;
unsigned char var_10 = (unsigned char)221;
unsigned char var_12 = (unsigned char)69;
int zero = 0;
unsigned char var_13 = (unsigned char)215;
_Bool var_14 = (_Bool)1;
int var_15 = -16488107;
unsigned char var_16 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
