#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 365500535U;
long long int var_2 = 2572143550752552140LL;
long long int var_5 = 8296183048824284138LL;
unsigned int var_6 = 1204307173U;
unsigned char var_7 = (unsigned char)86;
int var_8 = -1539060110;
unsigned short var_10 = (unsigned short)39216;
int zero = 0;
unsigned int var_11 = 4162292805U;
long long int var_12 = 7786634548487737930LL;
void init() {
}

void checksum() {
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
