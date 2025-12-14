#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)238;
long long int var_10 = 1641425151161378527LL;
unsigned char var_11 = (unsigned char)114;
unsigned char var_12 = (unsigned char)61;
unsigned short var_17 = (unsigned short)13229;
int zero = 0;
unsigned char var_19 = (unsigned char)162;
unsigned char var_20 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
