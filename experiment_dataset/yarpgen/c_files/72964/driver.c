#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
unsigned char var_2 = (unsigned char)51;
unsigned char var_3 = (unsigned char)60;
unsigned char var_6 = (unsigned char)128;
unsigned char var_7 = (unsigned char)191;
unsigned char var_11 = (unsigned char)19;
int zero = 0;
unsigned short var_14 = (unsigned short)57208;
unsigned short var_15 = (unsigned short)4582;
unsigned short var_16 = (unsigned short)14936;
unsigned char var_17 = (unsigned char)252;
unsigned char var_18 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
