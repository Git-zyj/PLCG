#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11269709883471785616ULL;
unsigned int var_4 = 3173858405U;
unsigned char var_5 = (unsigned char)84;
signed char var_8 = (signed char)41;
int zero = 0;
unsigned char var_11 = (unsigned char)105;
signed char var_12 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
