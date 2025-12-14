#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)38;
_Bool var_3 = (_Bool)1;
long long int var_4 = -8556079093849876438LL;
signed char var_5 = (signed char)-21;
unsigned long long int var_7 = 12160967467853503649ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 2731061526U;
unsigned char var_14 = (unsigned char)189;
short var_16 = (short)-20518;
signed char var_17 = (signed char)97;
signed char var_18 = (signed char)-60;
int var_19 = 756980195;
int zero = 0;
int var_20 = 792536088;
unsigned int var_21 = 3828298956U;
unsigned short var_22 = (unsigned short)19484;
int var_23 = -1060490890;
int var_24 = 299034664;
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
