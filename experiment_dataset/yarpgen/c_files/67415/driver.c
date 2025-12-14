#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)53;
unsigned char var_3 = (unsigned char)133;
unsigned char var_6 = (unsigned char)2;
unsigned char var_11 = (unsigned char)221;
int zero = 0;
unsigned long long int var_14 = 10876225911018224676ULL;
unsigned short var_15 = (unsigned short)36828;
signed char var_16 = (signed char)-107;
unsigned char var_17 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
