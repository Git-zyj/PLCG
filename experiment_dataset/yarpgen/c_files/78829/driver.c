#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 941018003U;
unsigned short var_1 = (unsigned short)44538;
unsigned long long int var_2 = 339712544152177219ULL;
unsigned short var_4 = (unsigned short)56488;
unsigned short var_5 = (unsigned short)46813;
unsigned char var_8 = (unsigned char)58;
unsigned long long int var_9 = 11786526664608620341ULL;
unsigned char var_10 = (unsigned char)209;
int var_13 = 840935578;
int var_14 = -983313024;
int zero = 0;
unsigned long long int var_15 = 6752746695873495859ULL;
short var_16 = (short)-15369;
void init() {
}

void checksum() {
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
