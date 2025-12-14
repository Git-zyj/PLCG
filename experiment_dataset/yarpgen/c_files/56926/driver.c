#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-97;
unsigned int var_2 = 381068105U;
long long int var_3 = 8578571617432612997LL;
unsigned int var_4 = 3947660380U;
unsigned char var_5 = (unsigned char)168;
unsigned int var_6 = 3719166872U;
signed char var_8 = (signed char)-30;
unsigned short var_9 = (unsigned short)41978;
short var_10 = (short)-4930;
int zero = 0;
short var_12 = (short)-7860;
long long int var_13 = 121688978941786366LL;
unsigned int var_14 = 2973347632U;
short var_15 = (short)-27470;
short var_16 = (short)-16674;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
