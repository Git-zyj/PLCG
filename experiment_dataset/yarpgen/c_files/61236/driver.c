#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -1838116688;
unsigned char var_3 = (unsigned char)60;
unsigned long long int var_4 = 12012248878194013669ULL;
int var_5 = -181585934;
unsigned long long int var_7 = 3631938325824424576ULL;
unsigned long long int var_12 = 13195328385311403433ULL;
unsigned long long int var_14 = 7412826056346224049ULL;
int zero = 0;
int var_19 = -430866497;
unsigned char var_20 = (unsigned char)98;
int var_21 = -1601651743;
unsigned long long int var_22 = 8720156561205378175ULL;
_Bool var_23 = (_Bool)0;
long long int var_24 = -6807401530804189556LL;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)105;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)9;
_Bool var_30 = (_Bool)0;
unsigned char arr_1 [18] ;
int arr_2 [18] [18] ;
unsigned char arr_3 [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
long long int arr_5 [18] ;
_Bool arr_6 [18] [18] [18] [18] ;
unsigned long long int arr_13 [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_18 [18] ;
_Bool arr_19 [18] [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -2044946805 : -1830125481;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1081451186282582271ULL : 991469892351734702ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -9211561607492163162LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 17691072367247887636ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 18194710794961506207ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
