#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7399318168936692598ULL;
signed char var_5 = (signed char)43;
long long int var_6 = -4462048540634032158LL;
unsigned short var_7 = (unsigned short)34166;
unsigned int var_8 = 3750653373U;
signed char var_10 = (signed char)-10;
unsigned long long int var_11 = 7267793818370814183ULL;
signed char var_14 = (signed char)11;
int zero = 0;
int var_15 = -1299981747;
unsigned char var_16 = (unsigned char)229;
unsigned char var_17 = (unsigned char)220;
signed char var_18 = (signed char)-40;
int var_19 = 1448051795;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
