#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23920;
unsigned long long int var_7 = 15313581113952469759ULL;
unsigned char var_12 = (unsigned char)75;
unsigned short var_13 = (unsigned short)13604;
unsigned char var_15 = (unsigned char)164;
int zero = 0;
unsigned long long int var_20 = 2705530586540428327ULL;
unsigned short var_21 = (unsigned short)4909;
unsigned long long int var_22 = 12268584834995100402ULL;
void init() {
}

void checksum() {
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
