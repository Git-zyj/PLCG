#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)5728;
int var_8 = 1683261972;
long long int var_10 = 7660040193983920173LL;
signed char var_14 = (signed char)2;
unsigned char var_15 = (unsigned char)131;
int zero = 0;
long long int var_16 = 8843579437061887016LL;
unsigned short var_17 = (unsigned short)24443;
unsigned int var_18 = 592247645U;
void init() {
}

void checksum() {
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
