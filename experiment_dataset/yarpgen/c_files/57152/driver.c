#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-104;
unsigned char var_4 = (unsigned char)253;
unsigned long long int var_5 = 12526732111140696656ULL;
short var_7 = (short)11441;
int var_14 = 15968583;
int zero = 0;
long long int var_18 = -9106331309480325764LL;
int var_19 = 1612393323;
signed char var_20 = (signed char)-3;
int var_21 = 750449339;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
