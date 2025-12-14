#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49050;
unsigned int var_2 = 1377016912U;
signed char var_3 = (signed char)98;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 11578173994373294526ULL;
int var_7 = -191334302;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)87;
int var_12 = -93216259;
unsigned short var_14 = (unsigned short)65030;
unsigned int var_15 = 1075896986U;
unsigned int var_16 = 2412397580U;
int zero = 0;
int var_19 = 1558888015;
int var_20 = -847442204;
unsigned short var_21 = (unsigned short)17649;
short var_22 = (short)23075;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
