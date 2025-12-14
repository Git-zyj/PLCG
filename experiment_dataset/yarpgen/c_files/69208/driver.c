#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1659219584U;
short var_2 = (short)-21240;
unsigned char var_8 = (unsigned char)86;
short var_10 = (short)-5257;
unsigned int var_13 = 1144820920U;
unsigned short var_14 = (unsigned short)61981;
short var_15 = (short)-6293;
unsigned short var_16 = (unsigned short)4701;
int zero = 0;
unsigned char var_17 = (unsigned char)122;
unsigned int var_18 = 704742185U;
short var_19 = (short)-12220;
unsigned char var_20 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
