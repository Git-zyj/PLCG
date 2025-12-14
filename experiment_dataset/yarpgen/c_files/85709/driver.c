#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 209204039U;
long long int var_1 = -6516038955900197470LL;
unsigned int var_3 = 2006104573U;
signed char var_4 = (signed char)-55;
signed char var_5 = (signed char)77;
unsigned int var_6 = 3419750682U;
short var_7 = (short)5855;
long long int var_8 = -7364904946088323099LL;
unsigned long long int var_11 = 14409275320872128957ULL;
long long int var_12 = -8449321159230620038LL;
long long int var_14 = 7409126661040222405LL;
long long int var_15 = -8841131434395673328LL;
int zero = 0;
unsigned int var_16 = 2773528430U;
unsigned long long int var_17 = 1099960315412951056ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
