#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
long long int var_2 = 2704154027543402724LL;
unsigned short var_3 = (unsigned short)28733;
unsigned char var_5 = (unsigned char)59;
long long int var_7 = -5246454810914699256LL;
signed char var_9 = (signed char)-48;
_Bool var_10 = (_Bool)0;
int var_13 = 1358558977;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 1221237651844015564ULL;
unsigned long long int var_19 = 17178745744017409373ULL;
int var_20 = -585368298;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
