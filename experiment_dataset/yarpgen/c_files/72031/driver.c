#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13115;
_Bool var_2 = (_Bool)1;
int var_6 = -389543466;
short var_7 = (short)-18615;
short var_10 = (short)-17529;
int zero = 0;
unsigned char var_11 = (unsigned char)45;
signed char var_12 = (signed char)-5;
int var_13 = -48538235;
short var_14 = (short)-28021;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
