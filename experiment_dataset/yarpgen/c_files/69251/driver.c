#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)193;
unsigned long long int var_2 = 5872116268554687367ULL;
long long int var_3 = -6104513130351402058LL;
signed char var_4 = (signed char)-92;
int var_6 = -272411842;
unsigned long long int var_7 = 6210888046944441175ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 3789083860387356882ULL;
unsigned long long int var_11 = 6868695893227376580ULL;
unsigned char var_16 = (unsigned char)187;
unsigned long long int var_17 = 10420542930162309862ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)6205;
short var_19 = (short)10732;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)9;
unsigned short var_22 = (unsigned short)28596;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
