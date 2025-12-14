#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)254;
int var_4 = 2039581160;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)128;
unsigned long long int var_12 = 3016024934464446227ULL;
int var_13 = -2014729348;
int zero = 0;
unsigned char var_17 = (unsigned char)146;
unsigned long long int var_18 = 1503287266680751447ULL;
unsigned long long int var_19 = 10681429270979434757ULL;
int var_20 = -845454145;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
