#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1064694536918605478LL;
unsigned char var_1 = (unsigned char)5;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 17499734450544812ULL;
long long int var_4 = -6882739766930704449LL;
unsigned long long int var_6 = 14398013265881137128ULL;
unsigned char var_7 = (unsigned char)206;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-16515;
int var_10 = -2068744201;
unsigned int var_11 = 1390226999U;
int zero = 0;
unsigned long long int var_12 = 12456659479390913505ULL;
short var_13 = (short)-8726;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-8165;
signed char var_16 = (signed char)4;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
