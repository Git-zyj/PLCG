#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9605;
unsigned char var_3 = (unsigned char)69;
_Bool var_4 = (_Bool)0;
unsigned short var_14 = (unsigned short)13689;
signed char var_15 = (signed char)-65;
long long int var_17 = 4425774039092898564LL;
unsigned long long int var_18 = 12012448141277940646ULL;
int zero = 0;
unsigned long long int var_19 = 59560301768347155ULL;
unsigned char var_20 = (unsigned char)5;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
