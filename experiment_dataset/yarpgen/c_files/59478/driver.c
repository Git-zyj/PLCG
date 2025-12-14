#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
signed char var_5 = (signed char)-95;
unsigned long long int var_6 = 174343352857077114ULL;
unsigned long long int var_10 = 13739998315464233571ULL;
unsigned long long int var_16 = 2434946334879948012ULL;
int zero = 0;
signed char var_19 = (signed char)-72;
int var_20 = -706644035;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
