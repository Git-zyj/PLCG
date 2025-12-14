#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)188;
signed char var_8 = (signed char)54;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)43126;
unsigned char var_15 = (unsigned char)209;
short var_19 = (short)28730;
int zero = 0;
short var_20 = (short)11325;
unsigned char var_21 = (unsigned char)44;
unsigned long long int var_22 = 5360405792474224844ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
