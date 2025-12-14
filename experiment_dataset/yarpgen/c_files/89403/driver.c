#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27768;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)67;
long long int var_3 = -6110482252599476335LL;
unsigned long long int var_4 = 6809674378339673051ULL;
short var_5 = (short)24437;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)6;
unsigned char var_9 = (unsigned char)198;
unsigned long long int var_11 = 11254000535893514961ULL;
unsigned long long int var_12 = 2214141359439941089ULL;
unsigned long long int var_13 = 16569614741449520495ULL;
short var_17 = (short)10709;
signed char var_18 = (signed char)115;
int zero = 0;
short var_19 = (short)15710;
short var_20 = (short)-32103;
unsigned char var_21 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
