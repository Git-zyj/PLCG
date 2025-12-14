#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 854780259;
unsigned int var_10 = 1696432125U;
unsigned char var_12 = (unsigned char)115;
unsigned short var_16 = (unsigned short)15230;
int zero = 0;
long long int var_18 = -363869443489728107LL;
unsigned int var_19 = 1752037941U;
unsigned short var_20 = (unsigned short)21271;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
