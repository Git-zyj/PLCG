#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)645;
long long int var_2 = -7711401959855325896LL;
unsigned int var_3 = 3150007027U;
long long int var_5 = 6732446246114409236LL;
unsigned long long int var_7 = 18090062081240079553ULL;
unsigned long long int var_8 = 7179548423686077767ULL;
int var_9 = -956179797;
signed char var_10 = (signed char)87;
unsigned short var_11 = (unsigned short)33709;
signed char var_13 = (signed char)-84;
_Bool var_14 = (_Bool)1;
signed char var_16 = (signed char)78;
unsigned int var_18 = 2725508977U;
long long int var_19 = -8494989536423564263LL;
int zero = 0;
unsigned short var_20 = (unsigned short)52133;
long long int var_21 = -378136492207644938LL;
unsigned long long int var_22 = 4122753872628966085ULL;
long long int var_23 = 6330457760526727775LL;
void init() {
}

void checksum() {
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
