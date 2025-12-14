#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17384207508516195478ULL;
unsigned long long int var_2 = 5509817341484388477ULL;
unsigned short var_6 = (unsigned short)33316;
unsigned int var_8 = 1980481492U;
unsigned int var_9 = 1533543413U;
int var_10 = 1348612658;
unsigned short var_11 = (unsigned short)38733;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)154;
int var_17 = 1824277168;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8398222759652557466LL;
unsigned int var_22 = 1274998173U;
unsigned short var_23 = (unsigned short)64823;
unsigned char var_24 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
