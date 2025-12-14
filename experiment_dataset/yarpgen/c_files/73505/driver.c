#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1966229271;
unsigned char var_2 = (unsigned char)255;
_Bool var_3 = (_Bool)0;
unsigned int var_8 = 368402554U;
int zero = 0;
unsigned char var_10 = (unsigned char)223;
unsigned char var_11 = (unsigned char)112;
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
