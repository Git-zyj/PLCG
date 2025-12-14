#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61292;
unsigned short var_2 = (unsigned short)46717;
unsigned long long int var_7 = 11719936029171888515ULL;
unsigned long long int var_8 = 2393014121644764077ULL;
unsigned long long int var_9 = 16619743282959479539ULL;
unsigned long long int var_10 = 11442118588765531733ULL;
short var_12 = (short)19426;
int zero = 0;
unsigned long long int var_14 = 16814078297592398043ULL;
unsigned long long int var_15 = 3066384572081680645ULL;
unsigned long long int var_16 = 3010732153078773816ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
