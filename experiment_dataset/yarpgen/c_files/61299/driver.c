#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)39349;
unsigned short var_6 = (unsigned short)45873;
unsigned char var_8 = (unsigned char)158;
int zero = 0;
unsigned short var_10 = (unsigned short)21285;
int var_11 = -93385057;
unsigned char var_12 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
