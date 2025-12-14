#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -244107397;
short var_1 = (short)-18960;
unsigned short var_2 = (unsigned short)32818;
long long int var_3 = -7222838602187076449LL;
int var_4 = -183955326;
signed char var_5 = (signed char)61;
unsigned char var_7 = (unsigned char)213;
_Bool var_8 = (_Bool)1;
int var_10 = 1585750469;
long long int var_11 = 8001658462876694012LL;
int zero = 0;
unsigned int var_12 = 165570133U;
unsigned int var_13 = 902123939U;
long long int var_14 = -1140670851681638090LL;
short var_15 = (short)12129;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
