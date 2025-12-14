#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 420196912159272292ULL;
unsigned long long int var_8 = 5973541267463751821ULL;
unsigned long long int var_10 = 1084865504198291361ULL;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-44;
unsigned char var_14 = (unsigned char)221;
unsigned long long int var_17 = 8442091795397105732ULL;
int zero = 0;
unsigned long long int var_18 = 1320958991561947059ULL;
unsigned char var_19 = (unsigned char)78;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 10841087421058953299ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
