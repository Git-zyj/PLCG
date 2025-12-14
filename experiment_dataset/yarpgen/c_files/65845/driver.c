#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)35;
_Bool var_3 = (_Bool)0;
long long int var_4 = -8076021345206092677LL;
unsigned int var_5 = 3895830146U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-17;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-28;
int zero = 0;
int var_11 = 676336077;
signed char var_12 = (signed char)13;
signed char var_13 = (signed char)101;
signed char var_14 = (signed char)-71;
unsigned char var_15 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
