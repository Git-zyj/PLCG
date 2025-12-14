#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2496685482U;
unsigned long long int var_4 = 17667628532653477944ULL;
signed char var_16 = (signed char)113;
int zero = 0;
unsigned long long int var_19 = 6801701180906403569ULL;
signed char var_20 = (signed char)-48;
unsigned int var_21 = 2288406684U;
unsigned short var_22 = (unsigned short)43827;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
