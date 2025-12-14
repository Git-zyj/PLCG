#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-7;
unsigned char var_4 = (unsigned char)158;
short var_5 = (short)-4405;
short var_15 = (short)-27490;
unsigned short var_16 = (unsigned short)34104;
int zero = 0;
short var_17 = (short)-26376;
int var_18 = 1959124605;
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
