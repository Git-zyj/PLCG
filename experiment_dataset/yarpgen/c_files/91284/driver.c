#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-16555;
unsigned char var_5 = (unsigned char)217;
short var_11 = (short)-21089;
signed char var_13 = (signed char)36;
int zero = 0;
unsigned char var_16 = (unsigned char)249;
unsigned short var_17 = (unsigned short)11818;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
