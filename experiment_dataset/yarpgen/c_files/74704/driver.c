#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16709;
unsigned int var_7 = 2586546436U;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)37284;
unsigned long long int var_11 = 3210763275693263627ULL;
signed char var_13 = (signed char)126;
unsigned char var_16 = (unsigned char)221;
signed char var_17 = (signed char)88;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 16690574904019315ULL;
unsigned short var_21 = (unsigned short)46246;
void init() {
}

void checksum() {
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
