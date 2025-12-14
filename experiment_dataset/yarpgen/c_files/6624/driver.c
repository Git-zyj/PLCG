#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9843544265741799151ULL;
unsigned long long int var_3 = 6828205475013009256ULL;
unsigned short var_6 = (unsigned short)5853;
unsigned int var_9 = 2147736813U;
int zero = 0;
unsigned long long int var_10 = 9300245471118889409ULL;
unsigned int var_11 = 1868286393U;
unsigned char var_12 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
