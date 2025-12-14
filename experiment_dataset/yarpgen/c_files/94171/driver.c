#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
unsigned int var_4 = 163154609U;
int var_6 = -1852632532;
long long int var_7 = -4148058636992329361LL;
unsigned char var_9 = (unsigned char)31;
int zero = 0;
unsigned char var_10 = (unsigned char)1;
unsigned char var_11 = (unsigned char)44;
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
