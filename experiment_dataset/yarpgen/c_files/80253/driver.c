#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_5 = (unsigned short)34878;
int var_7 = 1961117086;
unsigned int var_8 = 1316575400U;
unsigned long long int var_10 = 12991014812363975875ULL;
int zero = 0;
unsigned int var_11 = 2273719980U;
unsigned long long int var_12 = 2772044952992197866ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
