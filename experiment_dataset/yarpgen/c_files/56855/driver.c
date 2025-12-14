#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1262026645U;
int var_6 = 1240793501;
unsigned char var_14 = (unsigned char)119;
int zero = 0;
unsigned short var_17 = (unsigned short)50726;
unsigned char var_18 = (unsigned char)38;
int var_19 = 1340885648;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
