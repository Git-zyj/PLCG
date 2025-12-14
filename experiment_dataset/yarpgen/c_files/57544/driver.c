#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28178;
int var_2 = -1437579149;
unsigned short var_3 = (unsigned short)51019;
unsigned long long int var_5 = 5890477476666795863ULL;
signed char var_7 = (signed char)-32;
short var_9 = (short)3291;
int zero = 0;
unsigned char var_13 = (unsigned char)223;
unsigned char var_14 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
