#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)143;
short var_4 = (short)18195;
unsigned char var_5 = (unsigned char)249;
int var_6 = -1736660738;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_10 = -1732176207;
signed char var_11 = (signed char)126;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
