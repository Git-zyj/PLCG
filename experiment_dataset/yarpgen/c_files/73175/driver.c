#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7268695069766789209LL;
unsigned char var_1 = (unsigned char)3;
unsigned char var_4 = (unsigned char)13;
signed char var_5 = (signed char)92;
short var_6 = (short)17342;
unsigned short var_8 = (unsigned short)22454;
unsigned long long int var_10 = 7069156749082640382ULL;
long long int var_11 = 5422483385817749856LL;
unsigned char var_12 = (unsigned char)212;
int var_14 = 1582589130;
int zero = 0;
unsigned char var_15 = (unsigned char)209;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3676951254U;
short var_18 = (short)27189;
signed char var_19 = (signed char)83;
short var_20 = (short)32218;
unsigned char var_21 = (unsigned char)235;
short var_22 = (short)10714;
short var_23 = (short)-16926;
unsigned char var_24 = (unsigned char)98;
signed char arr_0 [18] ;
unsigned char arr_1 [18] ;
long long int arr_4 [18] [18] [18] [18] ;
int arr_5 [18] [18] ;
unsigned short arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)21 : (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 3343632275739734362LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -1678080295 : 1320548195;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)55113 : (unsigned short)6996;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
