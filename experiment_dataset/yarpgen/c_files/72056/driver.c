#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
int var_2 = 993955899;
unsigned char var_4 = (unsigned char)227;
unsigned int var_5 = 3966556722U;
unsigned char var_8 = (unsigned char)104;
int zero = 0;
unsigned char var_10 = (unsigned char)206;
unsigned short var_11 = (unsigned short)46496;
unsigned int var_12 = 37955893U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
