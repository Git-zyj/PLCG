#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)50;
long long int var_5 = -7584297484064851608LL;
short var_6 = (short)31011;
unsigned int var_8 = 150240295U;
unsigned int var_9 = 3583162754U;
unsigned char var_14 = (unsigned char)84;
int var_16 = 755904724;
int zero = 0;
signed char var_19 = (signed char)3;
unsigned char var_20 = (unsigned char)99;
long long int var_21 = 6192419458880146690LL;
short var_22 = (short)-21329;
signed char var_23 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
