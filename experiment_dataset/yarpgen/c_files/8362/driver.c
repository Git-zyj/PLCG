#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)1;
unsigned int var_2 = 2813654947U;
unsigned short var_4 = (unsigned short)65328;
int var_6 = -1685506859;
short var_7 = (short)-18766;
unsigned long long int var_8 = 3898404695276155705ULL;
short var_9 = (short)5158;
unsigned int var_13 = 3807667925U;
int zero = 0;
signed char var_14 = (signed char)-74;
unsigned int var_15 = 3624901114U;
unsigned long long int var_16 = 14085276785356144755ULL;
void init() {
}

void checksum() {
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
