#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4073;
unsigned char var_8 = (unsigned char)23;
long long int var_9 = 5181496337841941218LL;
unsigned char var_10 = (unsigned char)60;
long long int var_11 = -589428537549584202LL;
short var_13 = (short)-12208;
int var_14 = -394760223;
signed char var_15 = (signed char)95;
int zero = 0;
short var_17 = (short)-11132;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 8603050587952396702ULL;
void init() {
}

void checksum() {
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
