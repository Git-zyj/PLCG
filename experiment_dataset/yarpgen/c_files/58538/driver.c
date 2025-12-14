#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56010;
unsigned int var_2 = 190819416U;
unsigned char var_6 = (unsigned char)122;
int var_11 = -2141731774;
unsigned short var_14 = (unsigned short)64555;
int zero = 0;
unsigned short var_16 = (unsigned short)22023;
unsigned long long int var_17 = 7276624838435904659ULL;
unsigned char var_18 = (unsigned char)249;
int var_19 = 1118450683;
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
