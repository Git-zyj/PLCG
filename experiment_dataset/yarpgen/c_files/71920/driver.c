#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)13811;
signed char var_5 = (signed char)-50;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)11;
short var_12 = (short)4711;
_Bool var_15 = (_Bool)1;
long long int var_16 = -1810341854747749742LL;
signed char var_19 = (signed char)91;
int zero = 0;
signed char var_20 = (signed char)115;
unsigned short var_21 = (unsigned short)33858;
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
