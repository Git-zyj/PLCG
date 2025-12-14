#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 190460437U;
unsigned char var_2 = (unsigned char)187;
unsigned long long int var_4 = 3323728958422499146ULL;
unsigned long long int var_6 = 18340342813186045578ULL;
short var_8 = (short)-18375;
unsigned int var_12 = 622434318U;
_Bool var_16 = (_Bool)0;
short var_18 = (short)7120;
int zero = 0;
int var_19 = 50226320;
unsigned int var_20 = 1413574260U;
unsigned int var_21 = 801515764U;
_Bool var_22 = (_Bool)0;
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
