#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3438011194U;
unsigned char var_4 = (unsigned char)96;
unsigned char var_9 = (unsigned char)62;
int var_13 = -840235371;
int zero = 0;
int var_15 = -1007614009;
long long int var_16 = 8197156977750463535LL;
unsigned int var_17 = 2149553818U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
