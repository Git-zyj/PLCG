#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 2162227393441812181LL;
signed char var_3 = (signed char)-70;
unsigned int var_4 = 351894732U;
int var_6 = -1991438240;
unsigned int var_7 = 2580443947U;
long long int var_8 = -1922046120428920896LL;
short var_9 = (short)26874;
signed char var_13 = (signed char)-69;
int zero = 0;
int var_14 = 616564203;
signed char var_15 = (signed char)-51;
signed char var_16 = (signed char)-119;
unsigned short var_17 = (unsigned short)7754;
unsigned int var_18 = 3076809633U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
