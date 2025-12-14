#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)4992;
long long int var_6 = -2472878022086374167LL;
unsigned char var_8 = (unsigned char)193;
short var_10 = (short)-8218;
unsigned short var_11 = (unsigned short)35471;
unsigned short var_12 = (unsigned short)27256;
int zero = 0;
short var_13 = (short)4159;
short var_14 = (short)4011;
long long int var_15 = -5121898479526645424LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
