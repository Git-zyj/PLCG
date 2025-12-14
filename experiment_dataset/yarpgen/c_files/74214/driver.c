#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4296591391436978195ULL;
unsigned int var_3 = 4150734424U;
long long int var_11 = 7659430067992794308LL;
unsigned long long int var_14 = 1411001905044229325ULL;
int var_17 = 1886246239;
unsigned char var_18 = (unsigned char)224;
int zero = 0;
unsigned int var_20 = 3717146983U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)41733;
short var_23 = (short)7973;
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
