#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2303261013U;
unsigned short var_5 = (unsigned short)39399;
unsigned char var_6 = (unsigned char)157;
unsigned char var_14 = (unsigned char)138;
int zero = 0;
int var_16 = -892487993;
unsigned short var_17 = (unsigned short)42034;
int var_18 = -976375410;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
