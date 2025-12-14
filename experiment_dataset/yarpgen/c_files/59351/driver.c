#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11902;
unsigned char var_3 = (unsigned char)150;
int var_8 = 437354123;
unsigned short var_10 = (unsigned short)58373;
short var_13 = (short)-32431;
unsigned short var_14 = (unsigned short)41026;
int var_15 = 503213820;
int zero = 0;
unsigned long long int var_19 = 12139135254209007917ULL;
short var_20 = (short)11376;
unsigned short var_21 = (unsigned short)13669;
void init() {
}

void checksum() {
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
