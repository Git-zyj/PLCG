#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)147;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int var_10 = -701144907;
int var_11 = -268189445;
unsigned short var_13 = (unsigned short)518;
short var_14 = (short)-1714;
long long int var_15 = 7663920771074004942LL;
int zero = 0;
unsigned int var_16 = 3490028028U;
signed char var_17 = (signed char)-42;
short var_18 = (short)9572;
short var_19 = (short)-23188;
void init() {
}

void checksum() {
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
