#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3154441648U;
short var_3 = (short)-30705;
int var_6 = 1859757423;
unsigned short var_8 = (unsigned short)54600;
unsigned int var_10 = 3780683374U;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-31078;
unsigned char var_13 = (unsigned char)77;
short var_14 = (short)6492;
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
