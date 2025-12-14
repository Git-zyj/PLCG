#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)114;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)14171;
short var_6 = (short)27730;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1343560967U;
long long int var_9 = -516533991712382918LL;
unsigned int var_11 = 1475411605U;
int zero = 0;
long long int var_15 = 3301416762782525779LL;
long long int var_16 = 6981423092823862136LL;
unsigned long long int var_17 = 8248848295127953258ULL;
unsigned short var_18 = (unsigned short)777;
void init() {
}

void checksum() {
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
