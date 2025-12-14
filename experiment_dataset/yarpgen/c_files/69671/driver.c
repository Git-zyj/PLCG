#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8528;
unsigned char var_2 = (unsigned char)254;
signed char var_4 = (signed char)81;
short var_5 = (short)-19725;
long long int var_6 = 3147307270150869645LL;
unsigned char var_7 = (unsigned char)61;
short var_9 = (short)11982;
unsigned char var_10 = (unsigned char)30;
unsigned char var_12 = (unsigned char)125;
short var_14 = (short)-27631;
long long int var_15 = -5218768279057198635LL;
int var_16 = 36272508;
long long int var_17 = 7353679890080496141LL;
int zero = 0;
unsigned int var_20 = 3531563148U;
_Bool var_21 = (_Bool)1;
int var_22 = 1329628633;
unsigned short var_23 = (unsigned short)46459;
long long int var_24 = -5706485299066576432LL;
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
