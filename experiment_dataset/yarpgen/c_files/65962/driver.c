#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4702825449806310864LL;
long long int var_3 = 437798037679963740LL;
unsigned char var_4 = (unsigned char)190;
short var_5 = (short)29169;
unsigned char var_16 = (unsigned char)166;
int zero = 0;
unsigned char var_19 = (unsigned char)17;
long long int var_20 = 8896213339753359915LL;
void init() {
}

void checksum() {
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
