#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1886832382U;
short var_2 = (short)-27433;
unsigned long long int var_6 = 1390378444166390614ULL;
signed char var_12 = (signed char)16;
int zero = 0;
unsigned short var_16 = (unsigned short)49376;
signed char var_17 = (signed char)-45;
unsigned long long int var_18 = 17242634926739357414ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
