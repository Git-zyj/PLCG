#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5380287873370883442ULL;
long long int var_4 = 5165119770556165082LL;
unsigned char var_6 = (unsigned char)59;
int var_7 = 965336286;
unsigned char var_8 = (unsigned char)69;
unsigned int var_17 = 3838236927U;
int zero = 0;
unsigned short var_20 = (unsigned short)24538;
long long int var_21 = -8967913847468340893LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
