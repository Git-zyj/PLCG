#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14677626528980307658ULL;
signed char var_6 = (signed char)75;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2623211456U;
unsigned int var_12 = 1363001826U;
unsigned short var_14 = (unsigned short)13128;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)62101;
signed char var_21 = (signed char)104;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1363865636U;
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
