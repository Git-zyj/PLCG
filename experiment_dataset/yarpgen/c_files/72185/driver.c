#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53263;
unsigned short var_2 = (unsigned short)27109;
unsigned char var_3 = (unsigned char)124;
unsigned long long int var_5 = 8785223318347397371ULL;
int zero = 0;
int var_17 = -178922700;
unsigned long long int var_18 = 15709952834212473853ULL;
short var_19 = (short)-10493;
void init() {
}

void checksum() {
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
