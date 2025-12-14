#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
long long int var_10 = 3913464087557429511LL;
unsigned int var_12 = 3248211805U;
unsigned char var_17 = (unsigned char)109;
int zero = 0;
short var_20 = (short)18366;
unsigned int var_21 = 1563179379U;
short var_22 = (short)1898;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
