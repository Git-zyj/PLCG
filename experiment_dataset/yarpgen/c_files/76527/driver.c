#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)38210;
unsigned short var_3 = (unsigned short)27486;
unsigned long long int var_4 = 5567465164617538795ULL;
unsigned int var_8 = 4224395803U;
unsigned char var_12 = (unsigned char)188;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)2082;
unsigned int var_16 = 375504658U;
unsigned short var_17 = (unsigned short)15488;
unsigned char var_18 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
