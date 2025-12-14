#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19230;
short var_2 = (short)12714;
unsigned char var_4 = (unsigned char)175;
short var_6 = (short)-18498;
unsigned char var_7 = (unsigned char)252;
unsigned char var_8 = (unsigned char)6;
unsigned char var_9 = (unsigned char)178;
short var_10 = (short)5369;
short var_12 = (short)-23794;
short var_13 = (short)29411;
short var_15 = (short)-7876;
short var_16 = (short)3713;
short var_17 = (short)-27019;
int zero = 0;
short var_18 = (short)-19745;
short var_19 = (short)13735;
unsigned char var_20 = (unsigned char)101;
unsigned char var_21 = (unsigned char)114;
short var_22 = (short)-15352;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
