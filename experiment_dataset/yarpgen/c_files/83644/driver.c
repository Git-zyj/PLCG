#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24416;
unsigned char var_2 = (unsigned char)216;
unsigned char var_3 = (unsigned char)220;
signed char var_6 = (signed char)-12;
unsigned char var_12 = (unsigned char)247;
unsigned char var_14 = (unsigned char)143;
unsigned char var_15 = (unsigned char)194;
int zero = 0;
unsigned char var_20 = (unsigned char)9;
unsigned char var_21 = (unsigned char)187;
unsigned char var_22 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
