#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2172681486U;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 59926587U;
signed char var_5 = (signed char)-14;
unsigned short var_13 = (unsigned short)26597;
unsigned int var_16 = 4253807528U;
int zero = 0;
unsigned char var_17 = (unsigned char)42;
int var_18 = -2062881243;
int var_19 = -559694287;
long long int var_20 = -1062094612852125322LL;
signed char var_21 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
