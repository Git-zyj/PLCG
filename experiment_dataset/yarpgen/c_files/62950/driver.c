#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15890;
unsigned char var_4 = (unsigned char)223;
unsigned short var_10 = (unsigned short)55370;
unsigned int var_14 = 2555608839U;
int zero = 0;
unsigned char var_18 = (unsigned char)200;
unsigned long long int var_19 = 1563469260523562790ULL;
unsigned char var_20 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
