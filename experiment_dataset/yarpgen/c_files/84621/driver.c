#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8082401622630706399LL;
_Bool var_2 = (_Bool)0;
unsigned short var_6 = (unsigned short)53312;
unsigned int var_8 = 2433887479U;
unsigned char var_10 = (unsigned char)72;
int var_13 = 1106159899;
unsigned short var_14 = (unsigned short)63509;
int zero = 0;
short var_15 = (short)4799;
int var_16 = 757921866;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1147350831U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
