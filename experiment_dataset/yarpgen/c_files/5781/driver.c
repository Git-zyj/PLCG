#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1905;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)120;
long long int var_5 = -1017366104893493388LL;
_Bool var_6 = (_Bool)1;
short var_9 = (short)-6914;
signed char var_10 = (signed char)-114;
int var_11 = 1698214177;
int var_12 = -13021789;
unsigned short var_13 = (unsigned short)16171;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)148;
long long int var_16 = 4103357429185468917LL;
int var_17 = 1473252427;
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
