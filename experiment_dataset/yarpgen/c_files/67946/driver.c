#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned char var_2 = (unsigned char)125;
unsigned int var_3 = 3956258864U;
short var_6 = (short)7031;
short var_8 = (short)-27298;
int zero = 0;
unsigned long long int var_11 = 17968020935770535961ULL;
unsigned long long int var_12 = 4808404651680218148ULL;
void init() {
}

void checksum() {
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
