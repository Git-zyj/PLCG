#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)99;
_Bool var_6 = (_Bool)0;
short var_7 = (short)18390;
unsigned short var_18 = (unsigned short)51366;
int zero = 0;
unsigned int var_20 = 2040394627U;
long long int var_21 = 7724902201813809274LL;
long long int var_22 = 5280518442275296850LL;
long long int var_23 = 4191398935581301621LL;
unsigned char var_24 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
