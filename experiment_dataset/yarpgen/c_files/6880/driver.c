#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)70;
unsigned char var_8 = (unsigned char)94;
unsigned short var_9 = (unsigned short)24210;
unsigned short var_10 = (unsigned short)54596;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)35;
long long int var_14 = -5875130470891664063LL;
void init() {
}

void checksum() {
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
