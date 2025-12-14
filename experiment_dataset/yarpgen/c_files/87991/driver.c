#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)107;
signed char var_3 = (signed char)113;
signed char var_7 = (signed char)40;
int zero = 0;
unsigned long long int var_10 = 11127137363600776541ULL;
unsigned short var_11 = (unsigned short)52516;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
