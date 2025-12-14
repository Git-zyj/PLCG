#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52858;
unsigned char var_3 = (unsigned char)217;
unsigned char var_4 = (unsigned char)4;
long long int var_10 = 6501094767861316823LL;
short var_11 = (short)578;
unsigned short var_12 = (unsigned short)36694;
signed char var_15 = (signed char)31;
int var_16 = -304525052;
unsigned char var_18 = (unsigned char)3;
int zero = 0;
signed char var_19 = (signed char)-119;
long long int var_20 = 6273830817109136510LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)45;
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
