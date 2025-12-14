#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64131;
unsigned char var_1 = (unsigned char)31;
unsigned short var_2 = (unsigned short)56881;
unsigned short var_3 = (unsigned short)38493;
long long int var_4 = 8813734782691277518LL;
unsigned short var_5 = (unsigned short)45525;
signed char var_7 = (signed char)-87;
int zero = 0;
unsigned int var_10 = 1544300272U;
unsigned int var_11 = 1260802701U;
long long int var_12 = -2580790697108608377LL;
signed char var_13 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
