#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23201;
unsigned char var_2 = (unsigned char)111;
signed char var_6 = (signed char)108;
int var_8 = -359945661;
unsigned int var_11 = 2509971976U;
unsigned char var_12 = (unsigned char)157;
unsigned short var_13 = (unsigned short)702;
unsigned char var_14 = (unsigned char)108;
int zero = 0;
int var_15 = 673856539;
unsigned short var_16 = (unsigned short)50488;
unsigned short var_17 = (unsigned short)38163;
long long int var_18 = -779366564948169126LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
