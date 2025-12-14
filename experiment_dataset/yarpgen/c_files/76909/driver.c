#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -1223305141;
unsigned int var_12 = 2338644455U;
signed char var_14 = (signed char)98;
int zero = 0;
unsigned char var_19 = (unsigned char)49;
long long int var_20 = -3590533896575771867LL;
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
