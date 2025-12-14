#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
long long int var_1 = 1278433492008347186LL;
unsigned char var_3 = (unsigned char)148;
int var_4 = 1310214838;
signed char var_5 = (signed char)-81;
unsigned short var_6 = (unsigned short)14918;
long long int var_7 = 8540475795742864562LL;
short var_8 = (short)-16912;
unsigned short var_9 = (unsigned short)20646;
int zero = 0;
unsigned long long int var_10 = 13643329267930503354ULL;
long long int var_11 = -260369542680785197LL;
long long int var_12 = -3011696176975703211LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
