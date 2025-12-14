#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -78271709;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6879393856644498832LL;
int var_10 = -1397950586;
_Bool var_13 = (_Bool)0;
unsigned long long int var_17 = 17245554037954480306ULL;
int var_18 = 1689516550;
int zero = 0;
unsigned short var_20 = (unsigned short)16596;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-11744;
void init() {
}

void checksum() {
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
