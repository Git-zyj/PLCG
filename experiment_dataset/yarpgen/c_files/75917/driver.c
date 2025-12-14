#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 391599997441986067LL;
unsigned short var_1 = (unsigned short)7515;
int var_6 = -1079421974;
short var_8 = (short)-15061;
unsigned char var_10 = (unsigned char)220;
int var_11 = -1327651220;
unsigned short var_12 = (unsigned short)11870;
int zero = 0;
short var_16 = (short)-23029;
unsigned char var_17 = (unsigned char)91;
unsigned int var_18 = 1875432528U;
void init() {
}

void checksum() {
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
