#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25129;
int var_5 = -1268921001;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)13;
unsigned long long int var_11 = 9544441368851550188ULL;
int zero = 0;
unsigned long long int var_14 = 12062608947137998971ULL;
unsigned short var_15 = (unsigned short)40750;
long long int var_16 = 1838440736048054751LL;
short var_17 = (short)-22156;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
