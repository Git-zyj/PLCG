#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
unsigned short var_3 = (unsigned short)3577;
unsigned short var_7 = (unsigned short)45622;
unsigned int var_8 = 1916515596U;
unsigned short var_9 = (unsigned short)27255;
int var_10 = 1694136745;
short var_11 = (short)-20283;
int zero = 0;
short var_17 = (short)-7903;
unsigned short var_18 = (unsigned short)64569;
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
