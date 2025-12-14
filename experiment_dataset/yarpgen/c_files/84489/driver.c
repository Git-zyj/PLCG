#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
unsigned char var_1 = (unsigned char)134;
unsigned char var_2 = (unsigned char)20;
unsigned char var_8 = (unsigned char)193;
long long int var_12 = 474154498657373318LL;
int zero = 0;
unsigned int var_14 = 2096105342U;
unsigned int var_15 = 3419859289U;
unsigned char var_16 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
