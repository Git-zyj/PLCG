#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1239730664;
unsigned short var_3 = (unsigned short)62213;
unsigned short var_4 = (unsigned short)23893;
signed char var_9 = (signed char)11;
int var_11 = 1096515711;
short var_14 = (short)-11851;
unsigned long long int var_16 = 6261702425843280032ULL;
int var_17 = -1206182451;
int zero = 0;
unsigned int var_20 = 3801783697U;
int var_21 = 1233580977;
void init() {
}

void checksum() {
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
