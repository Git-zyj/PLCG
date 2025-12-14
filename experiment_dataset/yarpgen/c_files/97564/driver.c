#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)2;
signed char var_6 = (signed char)122;
signed char var_8 = (signed char)-21;
signed char var_9 = (signed char)-98;
unsigned int var_11 = 3743184470U;
unsigned char var_13 = (unsigned char)113;
int zero = 0;
unsigned char var_14 = (unsigned char)249;
int var_15 = -686740314;
short var_16 = (short)22837;
void init() {
}

void checksum() {
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
