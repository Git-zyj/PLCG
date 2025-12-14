#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1751357316;
int var_8 = -1945373097;
long long int var_11 = -210005670190205731LL;
int zero = 0;
unsigned short var_18 = (unsigned short)28841;
unsigned char var_19 = (unsigned char)41;
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
