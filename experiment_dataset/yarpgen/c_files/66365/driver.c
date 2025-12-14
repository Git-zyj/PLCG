#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1551983902828615498LL;
int var_1 = 1828696412;
unsigned short var_6 = (unsigned short)34273;
int var_8 = -1401466544;
unsigned short var_11 = (unsigned short)43595;
int zero = 0;
long long int var_13 = -6045593109825220927LL;
long long int var_14 = -4786906691062084734LL;
long long int var_15 = -4620241284208156429LL;
int var_16 = -249792513;
unsigned char var_17 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
