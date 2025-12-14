#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53747;
unsigned short var_8 = (unsigned short)8137;
unsigned char var_16 = (unsigned char)88;
int zero = 0;
unsigned char var_18 = (unsigned char)14;
unsigned long long int var_19 = 3705304516520540289ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
