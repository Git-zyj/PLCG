#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2594149777U;
long long int var_2 = -340877674171206680LL;
unsigned long long int var_3 = 8987049023957504603ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 11109496330085919518ULL;
int var_6 = 814033901;
long long int var_7 = -1829347355842622809LL;
long long int var_8 = 5570601030433043438LL;
unsigned char var_9 = (unsigned char)255;
unsigned long long int var_10 = 11658565033072102272ULL;
short var_11 = (short)-5817;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)75;
int zero = 0;
long long int var_15 = 6668179256803853608LL;
unsigned long long int var_16 = 10960812144504296194ULL;
void init() {
}

void checksum() {
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
