#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41261;
int var_4 = -1555179811;
unsigned char var_7 = (unsigned char)201;
unsigned char var_10 = (unsigned char)30;
int zero = 0;
unsigned char var_13 = (unsigned char)228;
unsigned short var_14 = (unsigned short)15614;
signed char var_15 = (signed char)68;
unsigned char var_16 = (unsigned char)98;
void init() {
}

void checksum() {
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
