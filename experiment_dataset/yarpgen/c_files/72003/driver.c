#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -6734590182332913710LL;
short var_3 = (short)-15392;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3761087360U;
unsigned int var_8 = 1161214834U;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-85;
unsigned char var_13 = (unsigned char)73;
long long int var_15 = -4624871159323324246LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 900526676;
signed char var_20 = (signed char)-81;
short var_21 = (short)10004;
void init() {
}

void checksum() {
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
