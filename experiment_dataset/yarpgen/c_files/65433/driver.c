#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
long long int var_2 = -6410611755405874702LL;
int var_3 = -1395441705;
unsigned short var_4 = (unsigned short)23769;
short var_5 = (short)-19751;
short var_7 = (short)21134;
short var_8 = (short)-23772;
int var_9 = 1065243111;
long long int var_10 = 1905115122994466005LL;
int zero = 0;
int var_12 = -1836588504;
unsigned char var_13 = (unsigned char)49;
unsigned long long int var_14 = 5848062595558153443ULL;
unsigned long long int var_15 = 12694953224510372612ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
