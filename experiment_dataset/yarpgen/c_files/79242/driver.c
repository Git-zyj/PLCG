#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -852597386;
long long int var_1 = -1396834281288026779LL;
unsigned int var_2 = 2597554735U;
short var_4 = (short)-17757;
short var_7 = (short)10222;
unsigned char var_10 = (unsigned char)156;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-80;
unsigned char var_14 = (unsigned char)171;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3303050717149496827LL;
signed char var_17 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
