#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15090077291466929126ULL;
unsigned short var_7 = (unsigned short)1061;
unsigned char var_8 = (unsigned char)141;
int zero = 0;
unsigned short var_12 = (unsigned short)21091;
unsigned short var_13 = (unsigned short)25349;
void init() {
}

void checksum() {
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
