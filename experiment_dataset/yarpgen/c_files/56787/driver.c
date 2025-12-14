#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-90;
long long int var_2 = 1296031807676617880LL;
unsigned short var_7 = (unsigned short)59697;
long long int var_8 = 8739205125530402816LL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)3272;
int zero = 0;
long long int var_15 = 7594970443362172384LL;
long long int var_16 = 1426065060491015473LL;
long long int var_17 = -6702303952659977356LL;
unsigned char var_18 = (unsigned char)74;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
