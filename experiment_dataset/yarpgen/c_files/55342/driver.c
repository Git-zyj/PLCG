#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12324740922224431394ULL;
signed char var_1 = (signed char)-110;
unsigned char var_2 = (unsigned char)225;
unsigned long long int var_5 = 14595765615913191002ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 4127092458U;
int var_11 = 144214913;
int zero = 0;
unsigned char var_12 = (unsigned char)251;
short var_13 = (short)-31689;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)54267;
long long int var_16 = 2088052687034437112LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
