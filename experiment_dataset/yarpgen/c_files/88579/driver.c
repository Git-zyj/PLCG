#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4984219413154571114ULL;
short var_3 = (short)31225;
short var_5 = (short)4587;
unsigned int var_8 = 2304004288U;
signed char var_9 = (signed char)125;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)28444;
short var_16 = (short)1067;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
