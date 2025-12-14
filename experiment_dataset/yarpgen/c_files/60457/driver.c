#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15294259720709616650ULL;
short var_1 = (short)-24036;
unsigned long long int var_6 = 9695101456814950101ULL;
int var_7 = -154289054;
long long int var_8 = -534419519036524224LL;
unsigned short var_10 = (unsigned short)35069;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 1074586519358983294ULL;
unsigned long long int var_13 = 16812603985647948922ULL;
unsigned short var_14 = (unsigned short)15075;
void init() {
}

void checksum() {
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
