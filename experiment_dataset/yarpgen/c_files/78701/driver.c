#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 488787942U;
unsigned char var_1 = (unsigned char)9;
signed char var_6 = (signed char)45;
signed char var_7 = (signed char)38;
short var_8 = (short)-9574;
signed char var_10 = (signed char)42;
signed char var_12 = (signed char)12;
signed char var_13 = (signed char)-119;
unsigned long long int var_14 = 15934515481376764040ULL;
signed char var_15 = (signed char)78;
unsigned long long int var_17 = 14861415089366936469ULL;
int zero = 0;
signed char var_18 = (signed char)124;
unsigned char var_19 = (unsigned char)170;
unsigned long long int var_20 = 11737373614592811150ULL;
signed char var_21 = (signed char)-4;
signed char var_22 = (signed char)-11;
long long int var_23 = -5640510573913070345LL;
int var_24 = -422042771;
unsigned long long int var_25 = 15618469664546620370ULL;
int var_26 = -1664380632;
unsigned long long int var_27 = 10163969249978808629ULL;
unsigned short var_28 = (unsigned short)50654;
unsigned int var_29 = 3541846676U;
unsigned long long int var_30 = 18287008651774909762ULL;
long long int arr_0 [15] ;
int arr_1 [15] ;
unsigned char arr_2 [15] [15] [15] ;
unsigned long long int arr_3 [15] [15] [15] ;
long long int arr_4 [15] ;
int arr_5 [15] ;
signed char arr_6 [15] [15] [15] ;
unsigned int arr_8 [15] [15] [15] ;
int arr_9 [15] ;
short arr_10 [15] [15] [15] [15] ;
unsigned long long int arr_11 [15] [15] ;
unsigned int arr_15 [15] [15] [15] ;
unsigned int arr_16 [15] [15] ;
unsigned long long int arr_19 [15] ;
unsigned long long int arr_20 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -6277679786099157462LL : 5733249035572892908LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 260128896;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 12546994415658200858ULL : 4925980210170712127ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1932306784679295488LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1390801537;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2827308464U : 196936184U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = -1709609658;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-735;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 3913802740304145896ULL : 2579344517432481017ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 853060238U : 3412290926U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 2327971180U : 261293149U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 8917444074265547350ULL : 13824014897398561004ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 14643666107718099251ULL : 2142161970227343508ULL;
}

void checksum() {
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
