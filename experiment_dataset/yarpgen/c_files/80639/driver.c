#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52522;
short var_2 = (short)96;
unsigned int var_4 = 1227734574U;
unsigned long long int var_9 = 16304709443674732376ULL;
short var_10 = (short)-15484;
int var_12 = -735380381;
signed char var_13 = (signed char)111;
unsigned char var_14 = (unsigned char)164;
unsigned short var_15 = (unsigned short)24397;
int zero = 0;
unsigned short var_18 = (unsigned short)29896;
long long int var_19 = -4204764506194537845LL;
unsigned char var_20 = (unsigned char)41;
signed char var_21 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
