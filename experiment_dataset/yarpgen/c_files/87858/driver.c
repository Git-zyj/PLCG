#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)-36;
unsigned short var_6 = (unsigned short)60074;
unsigned long long int var_7 = 16226590273399907372ULL;
int var_10 = 946556655;
unsigned long long int var_11 = 17620510078390548775ULL;
_Bool var_16 = (_Bool)1;
signed char var_18 = (signed char)-125;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
