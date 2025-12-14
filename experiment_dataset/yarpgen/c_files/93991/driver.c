#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -717376501;
unsigned short var_3 = (unsigned short)50170;
unsigned char var_5 = (unsigned char)196;
unsigned short var_12 = (unsigned short)24094;
unsigned int var_13 = 3419244174U;
unsigned char var_14 = (unsigned char)137;
int zero = 0;
signed char var_15 = (signed char)10;
unsigned long long int var_16 = 16377596712748638537ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
