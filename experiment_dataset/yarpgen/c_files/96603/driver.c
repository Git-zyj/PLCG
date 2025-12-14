#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)149;
short var_5 = (short)-600;
unsigned int var_10 = 3116801641U;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)25811;
unsigned short var_15 = (unsigned short)41098;
unsigned char var_16 = (unsigned char)231;
int var_18 = -833796460;
unsigned char var_19 = (unsigned char)185;
int zero = 0;
short var_20 = (short)-11648;
unsigned char var_21 = (unsigned char)94;
unsigned int var_22 = 1171080834U;
signed char var_23 = (signed char)104;
short var_24 = (short)27152;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
