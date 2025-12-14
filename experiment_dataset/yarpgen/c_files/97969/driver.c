#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)93;
unsigned int var_3 = 3514687771U;
signed char var_4 = (signed char)105;
unsigned char var_6 = (unsigned char)62;
unsigned int var_7 = 3809355329U;
short var_10 = (short)-11022;
unsigned long long int var_12 = 10893033608231235526ULL;
unsigned char var_13 = (unsigned char)141;
signed char var_16 = (signed char)-73;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_20 = (short)19714;
unsigned char var_21 = (unsigned char)122;
unsigned char var_22 = (unsigned char)211;
unsigned long long int var_23 = 9368403486883519613ULL;
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
