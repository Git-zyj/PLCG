#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned short var_6 = (unsigned short)5766;
unsigned long long int var_10 = 14240069451646573489ULL;
int zero = 0;
unsigned long long int var_13 = 9688373576716028100ULL;
signed char var_14 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
