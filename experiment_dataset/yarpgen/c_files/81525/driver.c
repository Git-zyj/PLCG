#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20821;
unsigned int var_1 = 1037704988U;
int var_4 = -1107274590;
int var_7 = -340018812;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)20329;
int zero = 0;
unsigned int var_19 = 2659764525U;
int var_20 = -362143520;
unsigned char var_21 = (unsigned char)164;
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
