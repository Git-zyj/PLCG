#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 992660359U;
signed char var_1 = (signed char)121;
long long int var_2 = 6341522620666164674LL;
signed char var_3 = (signed char)-63;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-32;
_Bool var_16 = (_Bool)1;
unsigned int var_19 = 3691831878U;
int zero = 0;
unsigned char var_20 = (unsigned char)9;
short var_21 = (short)26036;
unsigned short var_22 = (unsigned short)5254;
unsigned int var_23 = 2180337536U;
short var_24 = (short)-9535;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
