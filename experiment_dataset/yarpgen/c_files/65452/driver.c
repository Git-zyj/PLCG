#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)199;
unsigned char var_14 = (unsigned char)24;
unsigned short var_15 = (unsigned short)4783;
int zero = 0;
unsigned long long int var_18 = 9797458886869999609ULL;
unsigned long long int var_19 = 1605036859697742306ULL;
void init() {
}

void checksum() {
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
