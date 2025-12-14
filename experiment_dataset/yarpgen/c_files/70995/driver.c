#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-12;
unsigned long long int var_3 = 5877798918652855749ULL;
unsigned long long int var_4 = 1869541256501982789ULL;
int zero = 0;
signed char var_10 = (signed char)-72;
unsigned short var_11 = (unsigned short)48000;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
