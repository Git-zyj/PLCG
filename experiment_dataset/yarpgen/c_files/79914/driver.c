#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1595889666;
unsigned char var_11 = (unsigned char)169;
unsigned short var_17 = (unsigned short)57776;
int zero = 0;
unsigned int var_20 = 1387001015U;
unsigned long long int var_21 = 9136212393319820531ULL;
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
