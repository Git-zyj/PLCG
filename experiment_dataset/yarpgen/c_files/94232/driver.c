#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 669778693U;
_Bool var_2 = (_Bool)1;
long long int var_4 = 4902010407738162821LL;
int var_6 = -1094684738;
int var_8 = 2057903104;
unsigned char var_9 = (unsigned char)50;
unsigned short var_10 = (unsigned short)55754;
long long int var_12 = 7251918145902573369LL;
_Bool var_13 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = 4046035200783590252LL;
int var_17 = 738136516;
signed char var_18 = (signed char)46;
short var_19 = (short)-23461;
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
