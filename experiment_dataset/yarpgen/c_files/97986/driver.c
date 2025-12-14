#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 244960597;
unsigned char var_2 = (unsigned char)217;
short var_12 = (short)-2740;
unsigned long long int var_13 = 15978719564703904498ULL;
signed char var_15 = (signed char)62;
int zero = 0;
signed char var_20 = (signed char)124;
unsigned char var_21 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
