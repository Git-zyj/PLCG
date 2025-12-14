#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5437728096068253019ULL;
unsigned char var_2 = (unsigned char)137;
unsigned int var_7 = 559374456U;
long long int var_10 = 8570092093542937280LL;
unsigned long long int var_14 = 10634908807852637481ULL;
signed char var_17 = (signed char)95;
int zero = 0;
int var_18 = -179859046;
unsigned long long int var_19 = 10295543954996136461ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
