#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1516624205150168136ULL;
int var_2 = -1355418735;
unsigned long long int var_3 = 4116684221670266636ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)89;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)21762;
unsigned int var_21 = 2468487714U;
short var_22 = (short)-19153;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
