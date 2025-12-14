#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)211;
signed char var_8 = (signed char)-86;
unsigned short var_19 = (unsigned short)50733;
int zero = 0;
unsigned long long int var_20 = 1859208614160728896ULL;
unsigned short var_21 = (unsigned short)45871;
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
