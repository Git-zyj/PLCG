#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42956;
signed char var_1 = (signed char)-39;
long long int var_2 = -713920762742928078LL;
unsigned char var_3 = (unsigned char)204;
unsigned short var_5 = (unsigned short)42405;
unsigned long long int var_6 = 2776176994699792573ULL;
int var_7 = 944455384;
unsigned long long int var_8 = 8967392562843168451ULL;
unsigned int var_9 = 970280459U;
long long int var_11 = 281722989255428779LL;
int zero = 0;
unsigned short var_13 = (unsigned short)5414;
short var_14 = (short)-10313;
int var_15 = -775087759;
int var_16 = 1303249674;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
