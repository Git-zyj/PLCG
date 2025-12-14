#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4557;
short var_1 = (short)-19219;
unsigned short var_3 = (unsigned short)47088;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int var_9 = 436047661;
short var_11 = (short)27678;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)9;
unsigned char var_15 = (unsigned char)99;
int var_16 = 427766054;
void init() {
}

void checksum() {
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
