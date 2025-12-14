#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)3837;
unsigned char var_11 = (unsigned char)208;
unsigned long long int var_14 = 11579144147072467137ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)17556;
signed char var_16 = (signed char)-98;
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
