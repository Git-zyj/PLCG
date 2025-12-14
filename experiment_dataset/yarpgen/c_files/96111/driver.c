#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 513731310U;
unsigned char var_10 = (unsigned char)3;
int zero = 0;
long long int var_13 = 7661057991536919826LL;
long long int var_14 = 7526207618871861131LL;
unsigned int var_15 = 887228939U;
unsigned int var_16 = 4219784838U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
