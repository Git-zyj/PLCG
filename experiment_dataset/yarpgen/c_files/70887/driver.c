#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16035;
long long int var_5 = -8489628157487053005LL;
unsigned short var_7 = (unsigned short)63290;
int zero = 0;
unsigned int var_10 = 3628207860U;
signed char var_11 = (signed char)-73;
signed char var_12 = (signed char)-27;
unsigned int var_13 = 2467720870U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
