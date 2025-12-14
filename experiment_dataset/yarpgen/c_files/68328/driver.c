#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
long long int var_2 = 4210564722385357301LL;
signed char var_3 = (signed char)-73;
unsigned int var_11 = 3615486475U;
unsigned short var_12 = (unsigned short)23378;
unsigned char var_15 = (unsigned char)239;
unsigned short var_16 = (unsigned short)61084;
int zero = 0;
signed char var_20 = (signed char)47;
short var_21 = (short)-25510;
signed char var_22 = (signed char)9;
unsigned int var_23 = 1409682368U;
_Bool var_24 = (_Bool)0;
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
