#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)49545;
unsigned char var_4 = (unsigned char)139;
unsigned char var_7 = (unsigned char)75;
int zero = 0;
unsigned short var_12 = (unsigned short)40888;
unsigned long long int var_13 = 11270598585021611200ULL;
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
