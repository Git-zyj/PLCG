#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3016240010U;
_Bool var_4 = (_Bool)1;
int var_5 = 1200692154;
unsigned short var_6 = (unsigned short)245;
short var_8 = (short)-20535;
unsigned short var_10 = (unsigned short)13550;
short var_14 = (short)-5410;
unsigned char var_15 = (unsigned char)27;
unsigned long long int var_16 = 6996414895920951414ULL;
unsigned short var_17 = (unsigned short)27324;
int zero = 0;
unsigned short var_20 = (unsigned short)30850;
unsigned short var_21 = (unsigned short)12285;
unsigned char var_22 = (unsigned char)191;
unsigned char var_23 = (unsigned char)230;
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
