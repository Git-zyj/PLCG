#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-12296;
int var_3 = 275830563;
signed char var_4 = (signed char)-55;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)2701;
short var_11 = (short)13340;
int var_12 = 892396511;
unsigned char var_14 = (unsigned char)47;
int zero = 0;
short var_16 = (short)6351;
int var_17 = -628698750;
int var_18 = 1700437189;
unsigned int var_19 = 3608865582U;
unsigned long long int var_20 = 2370773111761166290ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
