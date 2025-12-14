#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31667;
signed char var_2 = (signed char)24;
unsigned char var_3 = (unsigned char)202;
unsigned char var_5 = (unsigned char)77;
unsigned long long int var_7 = 11365499732147348973ULL;
long long int var_8 = 665716428808689149LL;
unsigned short var_9 = (unsigned short)64670;
int var_10 = 839981450;
int zero = 0;
unsigned int var_11 = 2564576008U;
long long int var_12 = 2185268895772585743LL;
unsigned char var_13 = (unsigned char)95;
unsigned short var_14 = (unsigned short)30469;
void init() {
}

void checksum() {
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
