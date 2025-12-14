#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1931;
long long int var_6 = -2448401821202630788LL;
unsigned int var_8 = 472737806U;
unsigned char var_10 = (unsigned char)0;
_Bool var_13 = (_Bool)1;
int var_15 = -1713943223;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = 1454001537;
signed char var_19 = (signed char)49;
long long int var_20 = 7445304494195527830LL;
short var_21 = (short)13710;
int var_22 = 1727079335;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
