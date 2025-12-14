#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)22;
signed char var_7 = (signed char)78;
signed char var_8 = (signed char)-32;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)16382;
int zero = 0;
signed char var_13 = (signed char)108;
unsigned int var_14 = 763181567U;
void init() {
}

void checksum() {
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
