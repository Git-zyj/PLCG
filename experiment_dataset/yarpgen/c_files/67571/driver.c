#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3579625871U;
unsigned short var_1 = (unsigned short)20285;
short var_6 = (short)26419;
_Bool var_7 = (_Bool)0;
int var_10 = 906008360;
unsigned int var_11 = 3666192519U;
int zero = 0;
unsigned int var_13 = 1247606031U;
unsigned int var_14 = 443866756U;
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
