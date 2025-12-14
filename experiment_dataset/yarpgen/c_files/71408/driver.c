#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -424683435;
unsigned int var_1 = 857117315U;
unsigned int var_2 = 3164003442U;
long long int var_3 = 6436364311941751076LL;
short var_5 = (short)-18047;
signed char var_15 = (signed char)-48;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 1066041474;
int var_18 = -226864417;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
