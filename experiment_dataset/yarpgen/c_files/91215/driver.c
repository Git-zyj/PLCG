#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
unsigned char var_1 = (unsigned char)220;
long long int var_2 = -3342817041811058410LL;
short var_3 = (short)6319;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-24364;
signed char var_10 = (signed char)-68;
int var_13 = -1666097556;
signed char var_14 = (signed char)23;
unsigned long long int var_15 = 10589246595521132875ULL;
unsigned long long int var_16 = 10978435938779305646ULL;
int zero = 0;
long long int var_20 = -4685618851338836495LL;
unsigned char var_21 = (unsigned char)4;
signed char var_22 = (signed char)-95;
unsigned long long int var_23 = 10172532825616538839ULL;
unsigned long long int var_24 = 18331274878165577822ULL;
signed char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-55;
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
