#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 451357591;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)151;
short var_7 = (short)2694;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)62592;
unsigned char var_11 = (unsigned char)227;
unsigned char var_15 = (unsigned char)159;
int zero = 0;
long long int var_18 = -7146537936689817998LL;
long long int var_19 = 5989688324752324014LL;
unsigned int var_20 = 3306574796U;
unsigned char var_21 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
