#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45926;
unsigned long long int var_3 = 8590447964469819609ULL;
unsigned short var_5 = (unsigned short)19199;
unsigned char var_8 = (unsigned char)206;
unsigned char var_12 = (unsigned char)35;
int zero = 0;
int var_13 = 1001455019;
unsigned int var_14 = 523333436U;
void init() {
}

void checksum() {
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
