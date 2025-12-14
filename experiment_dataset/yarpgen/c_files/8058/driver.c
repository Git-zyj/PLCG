#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6934;
short var_1 = (short)13894;
signed char var_4 = (signed char)12;
unsigned short var_7 = (unsigned short)31853;
short var_8 = (short)-26504;
short var_13 = (short)-7877;
int zero = 0;
unsigned char var_16 = (unsigned char)152;
int var_17 = -1564107223;
int var_18 = 1112838753;
int var_19 = 162681163;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
