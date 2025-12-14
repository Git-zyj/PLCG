#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -217411976;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)13;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 812145112U;
unsigned char var_9 = (unsigned char)123;
int var_10 = 1254290826;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)54;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)122;
int var_15 = 1545279305;
unsigned short var_16 = (unsigned short)64394;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
