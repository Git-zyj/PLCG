#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -512166995;
unsigned char var_2 = (unsigned char)196;
long long int var_10 = 4892788954917644041LL;
signed char var_12 = (signed char)-21;
unsigned int var_14 = 3979858799U;
int zero = 0;
long long int var_16 = 864939983999895794LL;
short var_17 = (short)-27298;
void init() {
}

void checksum() {
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
