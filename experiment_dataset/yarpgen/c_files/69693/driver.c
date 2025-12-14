#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3826404149815737370LL;
_Bool var_1 = (_Bool)0;
short var_4 = (short)26193;
unsigned char var_6 = (unsigned char)134;
unsigned char var_8 = (unsigned char)16;
int zero = 0;
short var_10 = (short)28494;
short var_11 = (short)-5854;
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
