#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-21487;
unsigned char var_3 = (unsigned char)147;
_Bool var_4 = (_Bool)1;
short var_5 = (short)21480;
unsigned short var_6 = (unsigned short)37190;
_Bool var_7 = (_Bool)1;
long long int var_11 = 9218399370530303087LL;
int zero = 0;
unsigned short var_13 = (unsigned short)36466;
signed char var_14 = (signed char)91;
unsigned int var_15 = 3334541112U;
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
