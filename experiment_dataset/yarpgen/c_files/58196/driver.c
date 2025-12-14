#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)51;
unsigned short var_4 = (unsigned short)26563;
unsigned int var_5 = 2469157046U;
_Bool var_6 = (_Bool)1;
long long int var_8 = 8534879507591115830LL;
unsigned long long int var_9 = 2299272736701152299ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 282449541U;
unsigned int var_12 = 3731942071U;
int zero = 0;
unsigned char var_15 = (unsigned char)99;
short var_16 = (short)25754;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)1;
signed char var_19 = (signed char)37;
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
