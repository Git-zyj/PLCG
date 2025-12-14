#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1278301206;
unsigned long long int var_2 = 14583322693094917646ULL;
unsigned short var_4 = (unsigned short)29906;
long long int var_6 = 1309975340064877482LL;
unsigned short var_11 = (unsigned short)15704;
int zero = 0;
unsigned short var_12 = (unsigned short)21078;
long long int var_13 = -3741064778172613168LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)211;
void init() {
}

void checksum() {
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
