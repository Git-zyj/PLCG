#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1929713115;
unsigned char var_8 = (unsigned char)126;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 3024451742U;
short var_17 = (short)565;
unsigned char var_18 = (unsigned char)162;
void init() {
}

void checksum() {
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
