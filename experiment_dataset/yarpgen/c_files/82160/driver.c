#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-10;
unsigned char var_8 = (unsigned char)84;
signed char var_10 = (signed char)-34;
unsigned char var_11 = (unsigned char)66;
unsigned int var_12 = 2267126542U;
int zero = 0;
unsigned int var_14 = 4071783575U;
signed char var_15 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
