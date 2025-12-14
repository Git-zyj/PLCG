#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13260001989868051967ULL;
unsigned long long int var_4 = 5085963029065161168ULL;
unsigned char var_5 = (unsigned char)16;
unsigned char var_6 = (unsigned char)64;
unsigned short var_12 = (unsigned short)21009;
int var_13 = -604162632;
int var_15 = 1867284241;
int zero = 0;
unsigned long long int var_17 = 18004028615738503872ULL;
int var_18 = -1314121542;
unsigned int var_19 = 863423346U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)23120;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
