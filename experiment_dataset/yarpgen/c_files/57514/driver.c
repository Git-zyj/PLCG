#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42564;
int var_2 = 1295042929;
unsigned int var_3 = 2831952168U;
unsigned int var_4 = 2577128294U;
unsigned long long int var_5 = 16703950857267995101ULL;
signed char var_6 = (signed char)-62;
unsigned short var_7 = (unsigned short)59529;
unsigned char var_8 = (unsigned char)248;
unsigned int var_9 = 2119654877U;
signed char var_10 = (signed char)88;
signed char var_11 = (signed char)89;
long long int var_13 = 5587796739561524922LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)248;
unsigned long long int var_18 = 17767690839488882426ULL;
unsigned int var_19 = 3047369873U;
signed char var_20 = (signed char)9;
short var_21 = (short)-23748;
signed char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)80;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
