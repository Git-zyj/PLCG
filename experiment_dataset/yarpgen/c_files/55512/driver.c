#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1674126677;
int var_3 = -272630506;
unsigned char var_5 = (unsigned char)62;
_Bool var_7 = (_Bool)1;
int var_13 = -1170072104;
int var_16 = -762790580;
short var_18 = (short)-23398;
unsigned int var_19 = 873906726U;
int zero = 0;
unsigned char var_20 = (unsigned char)109;
short var_21 = (short)12218;
void init() {
}

void checksum() {
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
