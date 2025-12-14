#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -722629115;
unsigned short var_4 = (unsigned short)46952;
int var_5 = -482981126;
signed char var_6 = (signed char)-79;
int var_7 = 1459406748;
short var_9 = (short)17531;
unsigned short var_10 = (unsigned short)3924;
unsigned int var_11 = 3509638304U;
signed char var_13 = (signed char)80;
unsigned int var_14 = 3082070651U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)32529;
int zero = 0;
long long int var_17 = -7675151525471708980LL;
unsigned char var_18 = (unsigned char)70;
unsigned int var_19 = 1044144248U;
int var_20 = 2044398769;
int var_21 = 1778942100;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-112;
signed char arr_3 [25] ;
_Bool arr_6 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
