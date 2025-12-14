#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3851526509U;
unsigned short var_7 = (unsigned short)36852;
unsigned short var_9 = (unsigned short)35173;
int zero = 0;
unsigned int var_17 = 1334264568U;
unsigned char var_18 = (unsigned char)203;
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
