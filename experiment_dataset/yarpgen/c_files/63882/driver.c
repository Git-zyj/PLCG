#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4109151578519363488ULL;
unsigned long long int var_2 = 1183254421273556321ULL;
unsigned long long int var_3 = 4466724094237555049ULL;
unsigned long long int var_7 = 528306211203151014ULL;
unsigned int var_8 = 3456479479U;
signed char var_9 = (signed char)93;
long long int var_10 = -7650559320049424658LL;
unsigned short var_11 = (unsigned short)8750;
long long int var_12 = -7148840557766259862LL;
signed char var_15 = (signed char)-50;
unsigned char var_16 = (unsigned char)147;
unsigned char var_17 = (unsigned char)153;
int zero = 0;
long long int var_19 = 7572993477491117764LL;
unsigned char var_20 = (unsigned char)158;
unsigned int var_21 = 1241829130U;
signed char var_22 = (signed char)59;
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
