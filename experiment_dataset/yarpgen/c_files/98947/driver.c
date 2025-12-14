#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1441844660U;
unsigned char var_1 = (unsigned char)211;
unsigned long long int var_5 = 15501317356922080569ULL;
unsigned int var_7 = 2173394068U;
unsigned char var_9 = (unsigned char)65;
unsigned char var_12 = (unsigned char)66;
signed char var_13 = (signed char)-110;
signed char var_14 = (signed char)-119;
short var_15 = (short)-20158;
unsigned long long int var_16 = 11211086637884746219ULL;
unsigned char var_17 = (unsigned char)125;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3152195514U;
_Bool var_20 = (_Bool)1;
int var_21 = -1643826391;
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
