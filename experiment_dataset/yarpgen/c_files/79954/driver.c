#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1333759105U;
long long int var_3 = -152917621648486143LL;
int zero = 0;
unsigned short var_19 = (unsigned short)46563;
unsigned short var_20 = (unsigned short)22206;
unsigned char var_21 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
