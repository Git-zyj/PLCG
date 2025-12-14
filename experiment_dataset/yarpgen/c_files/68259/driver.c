#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned short var_3 = (unsigned short)52934;
long long int var_4 = -5726053502405173322LL;
signed char var_6 = (signed char)-122;
signed char var_9 = (signed char)74;
unsigned short var_10 = (unsigned short)4127;
unsigned short var_15 = (unsigned short)31050;
signed char var_16 = (signed char)90;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 881954058U;
signed char var_21 = (signed char)-55;
long long int var_22 = 7404644873240106304LL;
signed char var_23 = (signed char)-75;
signed char var_24 = (signed char)58;
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
