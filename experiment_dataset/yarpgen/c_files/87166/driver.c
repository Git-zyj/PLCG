#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2065920043019211084LL;
unsigned char var_2 = (unsigned char)188;
unsigned long long int var_3 = 2706285547046603627ULL;
int zero = 0;
unsigned long long int var_14 = 4077568339226636296ULL;
unsigned char var_15 = (unsigned char)129;
int var_16 = 23281732;
void init() {
}

void checksum() {
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
