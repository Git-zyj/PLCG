#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2123068937563294136LL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2260675805U;
signed char var_4 = (signed char)-37;
unsigned char var_5 = (unsigned char)91;
long long int var_7 = -3314241121240953723LL;
long long int var_8 = 4748628057104549916LL;
int var_13 = -168725326;
unsigned long long int var_15 = 3996818198528740219ULL;
int zero = 0;
unsigned long long int var_20 = 7865695980782602349ULL;
unsigned char var_21 = (unsigned char)60;
long long int var_22 = 1675708907672232864LL;
unsigned int var_23 = 1886628522U;
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
