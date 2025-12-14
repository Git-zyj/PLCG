#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -887549224;
int var_1 = -1245184117;
unsigned char var_2 = (unsigned char)213;
unsigned short var_3 = (unsigned short)33533;
short var_6 = (short)19229;
int var_9 = -1684388782;
int zero = 0;
unsigned long long int var_11 = 7178189975530100917ULL;
unsigned long long int var_12 = 3567916915023284696ULL;
unsigned char var_13 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
