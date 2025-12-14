#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17724;
unsigned char var_3 = (unsigned char)178;
unsigned int var_4 = 3692829341U;
unsigned int var_6 = 562999356U;
int zero = 0;
long long int var_10 = -6528330532167402771LL;
unsigned char var_11 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
