#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 3565645190567598765ULL;
unsigned char var_13 = (unsigned char)132;
unsigned short var_15 = (unsigned short)3718;
unsigned char var_18 = (unsigned char)47;
int zero = 0;
unsigned char var_20 = (unsigned char)225;
long long int var_21 = -184847328623817712LL;
void init() {
}

void checksum() {
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
