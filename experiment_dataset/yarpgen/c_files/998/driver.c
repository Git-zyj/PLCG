#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 4215103752653915276ULL;
unsigned int var_6 = 3720493480U;
unsigned int var_8 = 3711218290U;
unsigned int var_10 = 3166895778U;
unsigned int var_11 = 4049284456U;
signed char var_12 = (signed char)86;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3166184264U;
unsigned int var_17 = 437063119U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3446418114U;
unsigned short var_20 = (unsigned short)34915;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
