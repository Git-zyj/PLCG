#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18201;
unsigned short var_4 = (unsigned short)28693;
unsigned short var_7 = (unsigned short)56705;
unsigned short var_10 = (unsigned short)647;
unsigned short var_12 = (unsigned short)9852;
int zero = 0;
short var_13 = (short)-3685;
short var_14 = (short)9422;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
