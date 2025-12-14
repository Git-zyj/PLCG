#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12074394960045180154ULL;
unsigned int var_2 = 1479370958U;
unsigned short var_3 = (unsigned short)61293;
unsigned short var_4 = (unsigned short)30018;
long long int var_5 = 1282556238237517409LL;
unsigned long long int var_6 = 6615673418870045928ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)30415;
unsigned long long int var_10 = 12605920590359698780ULL;
int zero = 0;
int var_15 = 1396499326;
long long int var_16 = -7513152144663435687LL;
unsigned char var_17 = (unsigned char)7;
unsigned long long int var_18 = 9001343915525201885ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
