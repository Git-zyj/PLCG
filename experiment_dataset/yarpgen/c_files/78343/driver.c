#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
int var_3 = 1282903707;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 15121948974736388404ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)9007;
int var_11 = 892644729;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
