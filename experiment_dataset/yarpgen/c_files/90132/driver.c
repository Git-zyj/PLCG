#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2978601094U;
unsigned long long int var_1 = 8817164721780326527ULL;
unsigned int var_5 = 3413834769U;
unsigned int var_10 = 812798734U;
unsigned short var_11 = (unsigned short)34882;
int zero = 0;
unsigned char var_14 = (unsigned char)226;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-63;
signed char var_18 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
