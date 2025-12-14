#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11092782242748521140ULL;
unsigned long long int var_3 = 6655480761628788798ULL;
unsigned long long int var_6 = 7355813470387939354ULL;
signed char var_8 = (signed char)50;
unsigned char var_9 = (unsigned char)143;
int var_10 = -193573698;
unsigned long long int var_13 = 5932472033456880904ULL;
unsigned char var_17 = (unsigned char)95;
int zero = 0;
unsigned char var_19 = (unsigned char)234;
unsigned long long int var_20 = 5123539044936521664ULL;
int var_21 = 1777830071;
long long int var_22 = -1147048562586736367LL;
signed char var_23 = (signed char)-78;
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
