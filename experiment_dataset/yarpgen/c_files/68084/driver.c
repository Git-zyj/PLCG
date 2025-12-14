#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-107;
unsigned int var_8 = 2969102245U;
unsigned char var_15 = (unsigned char)125;
int zero = 0;
long long int var_18 = 2863033985458833970LL;
unsigned long long int var_19 = 5052482967918335884ULL;
unsigned int var_20 = 3008026866U;
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
