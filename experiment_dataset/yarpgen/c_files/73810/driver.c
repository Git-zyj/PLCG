#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 814839478373517577LL;
unsigned int var_3 = 2309640919U;
signed char var_4 = (signed char)-38;
unsigned long long int var_5 = 17024200323111337259ULL;
signed char var_6 = (signed char)41;
unsigned long long int var_7 = 7672215876763910762ULL;
unsigned short var_9 = (unsigned short)55841;
unsigned char var_10 = (unsigned char)80;
unsigned int var_11 = 2815671100U;
long long int var_12 = 1216196839888540288LL;
short var_13 = (short)1789;
unsigned int var_14 = 2511733979U;
unsigned char var_15 = (unsigned char)165;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)178;
unsigned int var_18 = 1801921414U;
unsigned long long int var_19 = 3910677264660257532ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3739838529U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
