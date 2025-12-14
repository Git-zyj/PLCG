#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)55;
unsigned char var_4 = (unsigned char)253;
int var_5 = -1984672705;
long long int var_7 = 2993275518286730763LL;
unsigned char var_10 = (unsigned char)245;
signed char var_11 = (signed char)90;
unsigned short var_13 = (unsigned short)37137;
unsigned int var_15 = 2814757937U;
int zero = 0;
long long int var_17 = 5876321351206495514LL;
int var_18 = -1033627179;
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
