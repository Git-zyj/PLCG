#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17765;
unsigned int var_8 = 1150737974U;
unsigned char var_9 = (unsigned char)88;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 4286018855U;
unsigned long long int var_14 = 12498402201177294026ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
