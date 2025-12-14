#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1442095699;
signed char var_2 = (signed char)-110;
short var_6 = (short)-6827;
unsigned int var_8 = 4042134706U;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)202;
unsigned int var_13 = 1798962636U;
unsigned long long int var_14 = 15002688742493875613ULL;
unsigned char var_15 = (unsigned char)147;
int var_16 = -2009131490;
unsigned int var_18 = 2990725918U;
int zero = 0;
int var_19 = -1056225576;
int var_20 = -549169363;
short var_21 = (short)5067;
unsigned long long int var_22 = 2180681638768224094ULL;
long long int var_23 = -7594010920604025332LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
