#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)185;
unsigned char var_11 = (unsigned char)72;
unsigned char var_15 = (unsigned char)86;
unsigned char var_18 = (unsigned char)60;
int zero = 0;
unsigned char var_20 = (unsigned char)142;
unsigned char var_21 = (unsigned char)193;
unsigned char var_22 = (unsigned char)79;
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
