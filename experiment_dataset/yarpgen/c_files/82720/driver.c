#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
unsigned short var_1 = (unsigned short)3265;
short var_5 = (short)9850;
int var_6 = 1212164731;
signed char var_7 = (signed char)-8;
int zero = 0;
int var_10 = -81261324;
unsigned char var_11 = (unsigned char)156;
unsigned char var_12 = (unsigned char)37;
short var_13 = (short)12484;
unsigned long long int var_14 = 820035808792578970ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
