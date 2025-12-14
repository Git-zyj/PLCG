#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15098;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)38683;
short var_6 = (short)16515;
unsigned char var_10 = (unsigned char)92;
_Bool var_12 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 16589428220139496524ULL;
long long int var_20 = 3109550637200148620LL;
int var_21 = 1926007003;
signed char var_22 = (signed char)-20;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
