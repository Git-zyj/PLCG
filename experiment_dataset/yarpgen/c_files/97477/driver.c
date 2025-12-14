#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34493;
unsigned char var_2 = (unsigned char)133;
signed char var_5 = (signed char)64;
unsigned long long int var_7 = 8549796296048904946ULL;
short var_9 = (short)-14390;
short var_10 = (short)-13713;
short var_11 = (short)-5906;
short var_12 = (short)15977;
int var_13 = -434224233;
int zero = 0;
signed char var_14 = (signed char)-40;
unsigned long long int var_15 = 9408920187392252578ULL;
signed char var_16 = (signed char)47;
void init() {
}

void checksum() {
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
