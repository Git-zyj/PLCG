#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)237;
unsigned long long int var_6 = 16042156079072143857ULL;
int var_7 = -1974144959;
unsigned char var_11 = (unsigned char)14;
int zero = 0;
unsigned int var_12 = 2035020904U;
unsigned short var_13 = (unsigned short)50346;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
