#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
short var_1 = (short)-11894;
long long int var_2 = 4175933293789938626LL;
long long int var_3 = 4995675681519719083LL;
unsigned int var_4 = 432413675U;
short var_5 = (short)-17120;
signed char var_7 = (signed char)-6;
unsigned long long int var_8 = 1660921159239446384ULL;
int var_11 = 1653783851;
_Bool var_12 = (_Bool)0;
long long int var_14 = 3358234707344880123LL;
unsigned long long int var_15 = 9281563276877256003ULL;
unsigned short var_16 = (unsigned short)57495;
int zero = 0;
unsigned long long int var_17 = 3447817106925173827ULL;
short var_18 = (short)-21748;
unsigned long long int var_19 = 1251502440972228288ULL;
short var_20 = (short)-4858;
unsigned long long int var_21 = 16688379623950018666ULL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)11655;
int var_24 = 1269627728;
signed char var_25 = (signed char)-47;
long long int var_26 = 2701396484395422383LL;
short arr_1 [10] ;
unsigned int arr_7 [10] [10] ;
signed char arr_9 [15] ;
unsigned long long int arr_10 [15] ;
short arr_11 [13] [13] ;
long long int arr_12 [13] ;
unsigned char arr_8 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)29001 : (short)-8438;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 2416884310U : 3328004183U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 10502547997505462336ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-22201;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 1428697270235489541LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)196 : (unsigned char)162;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
