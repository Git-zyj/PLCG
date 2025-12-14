#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1328942942U;
signed char var_5 = (signed char)41;
long long int var_8 = -7145660897738438100LL;
long long int var_12 = -3727746849318677712LL;
int zero = 0;
unsigned char var_13 = (unsigned char)18;
unsigned char var_14 = (unsigned char)177;
signed char var_15 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
