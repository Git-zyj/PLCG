#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58800;
unsigned short var_2 = (unsigned short)2089;
unsigned short var_7 = (unsigned short)16139;
unsigned short var_8 = (unsigned short)60499;
unsigned short var_11 = (unsigned short)64838;
unsigned short var_12 = (unsigned short)23546;
unsigned short var_13 = (unsigned short)22754;
int zero = 0;
unsigned short var_14 = (unsigned short)41870;
unsigned short var_15 = (unsigned short)56791;
unsigned short var_16 = (unsigned short)45030;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
