#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10729;
signed char var_13 = (signed char)-27;
unsigned char var_14 = (unsigned char)68;
short var_16 = (short)-32476;
int zero = 0;
signed char var_17 = (signed char)-94;
unsigned char var_18 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
