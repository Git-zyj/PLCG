#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1814153031;
unsigned long long int var_1 = 17294685431987351698ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
long long int var_4 = -5663866917372744878LL;
unsigned char var_5 = (unsigned char)18;
unsigned short var_7 = (unsigned short)8935;
signed char var_8 = (signed char)48;
unsigned short var_10 = (unsigned short)35029;
int zero = 0;
unsigned int var_12 = 4134153441U;
unsigned long long int var_13 = 14576882523538309331ULL;
long long int var_14 = -6689667148969466332LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
