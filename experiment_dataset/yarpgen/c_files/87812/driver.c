#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)133;
unsigned int var_4 = 3961950254U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)74;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)9168;
int zero = 0;
unsigned char var_13 = (unsigned char)138;
unsigned int var_14 = 1203865847U;
unsigned int var_15 = 3545480285U;
unsigned int var_16 = 2374831599U;
long long int var_17 = 7121606152585571709LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
