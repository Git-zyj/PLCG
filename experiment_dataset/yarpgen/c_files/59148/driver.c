#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1821841519U;
long long int var_11 = 6411165831888087953LL;
signed char var_14 = (signed char)78;
unsigned long long int var_16 = 7779790537771720108ULL;
int zero = 0;
int var_20 = 291040563;
unsigned int var_21 = 2865437844U;
unsigned short var_22 = (unsigned short)52455;
unsigned long long int var_23 = 17484730025019270073ULL;
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
