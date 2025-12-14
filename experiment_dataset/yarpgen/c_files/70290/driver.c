#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30213;
unsigned long long int var_16 = 11516896501324508742ULL;
int var_17 = -933915038;
unsigned char var_18 = (unsigned char)5;
signed char var_19 = (signed char)28;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)62833;
long long int var_22 = -272115054306877653LL;
_Bool var_23 = (_Bool)1;
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
