#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6708987582410283301LL;
unsigned int var_1 = 2005338357U;
long long int var_2 = 6389477841013146671LL;
unsigned long long int var_3 = 2884563228451104082ULL;
unsigned long long int var_4 = 9194130998656620916ULL;
long long int var_5 = -3401362580394685069LL;
unsigned long long int var_7 = 14318145403302729890ULL;
short var_8 = (short)15870;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)221;
unsigned int var_11 = 1329120994U;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
