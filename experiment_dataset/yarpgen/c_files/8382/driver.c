#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)143;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-6317;
unsigned short var_7 = (unsigned short)62658;
short var_8 = (short)20023;
unsigned char var_9 = (unsigned char)95;
unsigned char var_14 = (unsigned char)97;
int zero = 0;
unsigned long long int var_15 = 17551875700480574717ULL;
unsigned long long int var_16 = 1774030359666944271ULL;
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
