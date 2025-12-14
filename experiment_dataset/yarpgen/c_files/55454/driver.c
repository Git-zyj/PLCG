#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 14778461435197125760ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)14020;
int var_18 = 2132810723;
long long int var_19 = 4445766431959588609LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 4036645839U;
unsigned short var_22 = (unsigned short)10232;
unsigned long long int var_23 = 12155038612609330035ULL;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
