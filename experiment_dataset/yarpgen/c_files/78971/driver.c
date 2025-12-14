#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64258;
unsigned char var_1 = (unsigned char)162;
unsigned char var_3 = (unsigned char)2;
long long int var_4 = 2614953748115912346LL;
unsigned long long int var_6 = 15530077608875559602ULL;
signed char var_7 = (signed char)14;
unsigned char var_10 = (unsigned char)9;
int zero = 0;
int var_12 = 773090391;
unsigned long long int var_13 = 10252484250724267291ULL;
unsigned char var_14 = (unsigned char)116;
long long int var_15 = 785964477971302254LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
