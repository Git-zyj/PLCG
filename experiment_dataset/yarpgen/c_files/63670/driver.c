#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
unsigned int var_2 = 885216837U;
int var_3 = -171933298;
signed char var_6 = (signed char)-119;
unsigned long long int var_7 = 3393480226596676531ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_15 = 6211712497712947583ULL;
short var_17 = (short)-4054;
int zero = 0;
signed char var_18 = (signed char)49;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-124;
int var_21 = 39468063;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
