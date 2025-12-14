#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)31479;
signed char var_9 = (signed char)97;
unsigned char var_10 = (unsigned char)135;
signed char var_13 = (signed char)-91;
int zero = 0;
int var_15 = -673975211;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)149;
void init() {
}

void checksum() {
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
