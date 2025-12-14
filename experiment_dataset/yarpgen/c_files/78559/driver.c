#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)50535;
unsigned char var_7 = (unsigned char)33;
int var_8 = 1316439492;
long long int var_11 = 3099678341317990564LL;
int var_12 = 1668590500;
int zero = 0;
int var_13 = -1806048206;
short var_14 = (short)1574;
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
