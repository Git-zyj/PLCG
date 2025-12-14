#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17334489160574156671ULL;
unsigned short var_4 = (unsigned short)56324;
unsigned short var_5 = (unsigned short)21646;
unsigned int var_6 = 166574371U;
signed char var_8 = (signed char)90;
short var_9 = (short)-16978;
long long int var_11 = -751318785552700927LL;
unsigned int var_13 = 3718096382U;
int zero = 0;
int var_14 = 224486191;
unsigned char var_15 = (unsigned char)220;
unsigned char var_16 = (unsigned char)207;
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
