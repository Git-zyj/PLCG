#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60318;
unsigned short var_11 = (unsigned short)3361;
short var_12 = (short)10302;
int zero = 0;
unsigned char var_15 = (unsigned char)108;
unsigned char var_16 = (unsigned char)120;
unsigned short var_17 = (unsigned short)46446;
unsigned char var_18 = (unsigned char)211;
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
