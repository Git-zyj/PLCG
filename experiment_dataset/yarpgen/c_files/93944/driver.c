#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22016;
long long int var_1 = -4534106762163299739LL;
long long int var_2 = 136093224900148669LL;
unsigned char var_3 = (unsigned char)8;
unsigned long long int var_4 = 2906615142064737202ULL;
short var_5 = (short)-2495;
_Bool var_7 = (_Bool)1;
long long int var_8 = 9158744311928269641LL;
long long int var_9 = -3164686060054001772LL;
int zero = 0;
unsigned short var_10 = (unsigned short)27833;
unsigned short var_11 = (unsigned short)44199;
unsigned char var_12 = (unsigned char)8;
unsigned short var_13 = (unsigned short)10053;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
