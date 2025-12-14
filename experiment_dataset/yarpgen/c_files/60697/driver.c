#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6153732024456526036LL;
signed char var_2 = (signed char)29;
short var_3 = (short)24347;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
long long int var_6 = -2116754226044568725LL;
short var_7 = (short)-23344;
unsigned long long int var_10 = 9433597598120942885ULL;
unsigned long long int var_11 = 13202239162151939547ULL;
unsigned short var_12 = (unsigned short)13158;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)236;
int var_17 = 499557758;
long long int var_18 = 1492635601383430664LL;
unsigned char var_19 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
