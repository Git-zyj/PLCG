#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6744804126161268949LL;
long long int var_2 = 602678719082591821LL;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)3;
unsigned char var_11 = (unsigned char)111;
signed char var_14 = (signed char)-21;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)7292;
unsigned char var_20 = (unsigned char)234;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 5139348043197303224ULL;
void init() {
}

void checksum() {
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
