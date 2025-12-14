#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 506063385371439750ULL;
_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 189794368U;
unsigned long long int var_10 = 9530464822310315175ULL;
unsigned short var_12 = (unsigned short)23907;
unsigned short var_13 = (unsigned short)48801;
int zero = 0;
short var_15 = (short)-30595;
short var_16 = (short)19404;
void init() {
}

void checksum() {
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
