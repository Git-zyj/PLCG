#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1027738044U;
_Bool var_2 = (_Bool)1;
int var_5 = -1925762246;
unsigned short var_8 = (unsigned short)52470;
unsigned char var_10 = (unsigned char)152;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned int var_17 = 3483387977U;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_19 = 3897485798947327743LL;
unsigned char var_20 = (unsigned char)219;
void init() {
}

void checksum() {
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
