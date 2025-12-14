#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)39;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)188;
unsigned short var_12 = (unsigned short)62725;
signed char var_14 = (signed char)-52;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-1260;
short var_18 = (short)-1628;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 4595798635836605338ULL;
unsigned char var_21 = (unsigned char)174;
unsigned long long int var_22 = 13467396129510663391ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
