#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7717517877126830728LL;
unsigned char var_2 = (unsigned char)15;
int var_5 = -1041127013;
_Bool var_6 = (_Bool)1;
long long int var_9 = -6515837913310256438LL;
unsigned char var_10 = (unsigned char)202;
int zero = 0;
int var_11 = -155779641;
unsigned short var_12 = (unsigned short)5056;
unsigned char var_13 = (unsigned char)17;
signed char var_14 = (signed char)-115;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)61697;
long long int arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 597319739883037833LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
