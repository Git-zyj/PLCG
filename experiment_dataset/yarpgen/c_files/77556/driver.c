#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1018239737;
unsigned short var_10 = (unsigned short)23275;
int zero = 0;
int var_14 = 482088086;
unsigned char var_15 = (unsigned char)188;
int var_16 = -1806925712;
unsigned char var_17 = (unsigned char)199;
int var_18 = -345413638;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
