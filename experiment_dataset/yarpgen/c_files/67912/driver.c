#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26000;
unsigned int var_3 = 601320645U;
unsigned short var_8 = (unsigned short)11216;
unsigned char var_13 = (unsigned char)251;
long long int var_16 = -7279580653297316837LL;
int zero = 0;
unsigned short var_20 = (unsigned short)45418;
unsigned char var_21 = (unsigned char)71;
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
