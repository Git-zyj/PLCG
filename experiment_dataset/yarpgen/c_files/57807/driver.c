#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-99;
unsigned char var_6 = (unsigned char)102;
unsigned char var_10 = (unsigned char)16;
unsigned short var_12 = (unsigned short)3420;
unsigned long long int var_15 = 6698469467013993102ULL;
unsigned short var_16 = (unsigned short)13176;
int zero = 0;
unsigned long long int var_17 = 1712579016492692385ULL;
unsigned char var_18 = (unsigned char)40;
void init() {
}

void checksum() {
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
