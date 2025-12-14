#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 584841479;
signed char var_3 = (signed char)99;
int var_4 = -1519450762;
unsigned short var_6 = (unsigned short)49862;
signed char var_11 = (signed char)-16;
signed char var_13 = (signed char)-65;
int zero = 0;
signed char var_18 = (signed char)66;
unsigned long long int var_19 = 17760566780318714398ULL;
int var_20 = 744810549;
_Bool var_21 = (_Bool)0;
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
