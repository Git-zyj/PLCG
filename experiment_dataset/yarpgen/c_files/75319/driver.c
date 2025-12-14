#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)11;
unsigned short var_2 = (unsigned short)53620;
unsigned short var_3 = (unsigned short)20317;
unsigned int var_10 = 2297443909U;
unsigned char var_13 = (unsigned char)90;
signed char var_14 = (signed char)-32;
int zero = 0;
unsigned char var_15 = (unsigned char)161;
unsigned short var_16 = (unsigned short)27241;
unsigned char var_17 = (unsigned char)150;
unsigned short var_18 = (unsigned short)14378;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
