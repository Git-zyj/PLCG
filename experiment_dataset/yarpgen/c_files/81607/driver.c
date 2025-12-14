#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4292068139U;
int var_4 = -2068918411;
long long int var_6 = -4748995429799654393LL;
long long int var_10 = 7709921181392478633LL;
unsigned short var_12 = (unsigned short)19453;
int var_13 = 2144351316;
unsigned char var_14 = (unsigned char)110;
_Bool var_15 = (_Bool)1;
int var_16 = -1727495423;
int zero = 0;
long long int var_17 = 1863658883577165699LL;
signed char var_18 = (signed char)66;
signed char var_19 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
