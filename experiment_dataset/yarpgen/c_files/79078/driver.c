#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)247;
unsigned char var_8 = (unsigned char)63;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 1317018634664476871ULL;
int var_14 = 1376672027;
unsigned short var_15 = (unsigned short)8909;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
