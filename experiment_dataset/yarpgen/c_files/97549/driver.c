#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3440625214274245086LL;
int var_6 = 47582424;
int var_12 = -91175197;
signed char var_14 = (signed char)81;
long long int var_15 = -2832090113365691321LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)8409;
short var_18 = (short)-14291;
unsigned char var_19 = (unsigned char)163;
unsigned short var_20 = (unsigned short)2908;
long long int var_21 = 6970518680210092176LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
