#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)82;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)161;
int var_10 = -505169470;
unsigned char var_11 = (unsigned char)200;
long long int var_13 = 8171329693394442366LL;
int var_14 = 822286836;
unsigned char var_15 = (unsigned char)105;
int zero = 0;
unsigned long long int var_18 = 2420959022128071524ULL;
unsigned char var_19 = (unsigned char)199;
unsigned long long int var_20 = 1388640959152726936ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
