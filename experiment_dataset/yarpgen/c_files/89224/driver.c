#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -377820677549566448LL;
unsigned int var_1 = 15007038U;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)207;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 9631286466278916239ULL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)76;
unsigned short var_11 = (unsigned short)11113;
short var_12 = (short)-12171;
unsigned char var_13 = (unsigned char)143;
int var_14 = -923738051;
int var_15 = -301097698;
int zero = 0;
int var_16 = 143116972;
unsigned long long int var_17 = 8526628382752295033ULL;
int var_18 = 2115924739;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
