#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52522;
unsigned char var_1 = (unsigned char)134;
unsigned short var_2 = (unsigned short)43250;
unsigned char var_3 = (unsigned char)163;
unsigned short var_5 = (unsigned short)3459;
unsigned short var_7 = (unsigned short)11079;
unsigned short var_9 = (unsigned short)3095;
unsigned char var_10 = (unsigned char)191;
unsigned short var_15 = (unsigned short)39573;
int zero = 0;
unsigned short var_16 = (unsigned short)4577;
unsigned short var_17 = (unsigned short)41612;
unsigned short var_18 = (unsigned short)12750;
void init() {
}

void checksum() {
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
