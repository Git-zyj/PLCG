#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6681;
signed char var_2 = (signed char)-40;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-92;
unsigned short var_10 = (unsigned short)17737;
unsigned long long int var_12 = 14174824426655153998ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)174;
unsigned int var_18 = 1818952282U;
int var_19 = 379649609;
unsigned int var_20 = 1176418448U;
void init() {
}

void checksum() {
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
