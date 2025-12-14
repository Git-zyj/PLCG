#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -446503511;
short var_3 = (short)11334;
long long int var_4 = -5408155979275315200LL;
long long int var_5 = 392533008615070197LL;
signed char var_6 = (signed char)8;
long long int var_7 = -191670442481790850LL;
unsigned int var_10 = 923516689U;
long long int var_11 = 3903554950273059055LL;
unsigned int var_13 = 1724024067U;
int zero = 0;
int var_14 = -451375029;
signed char var_15 = (signed char)-65;
int var_16 = 1143298890;
unsigned int var_17 = 3595161938U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
