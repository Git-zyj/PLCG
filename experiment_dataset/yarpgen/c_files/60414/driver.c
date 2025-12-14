#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -128295292;
signed char var_7 = (signed char)10;
signed char var_8 = (signed char)-76;
signed char var_9 = (signed char)-10;
unsigned int var_13 = 3249944026U;
signed char var_14 = (signed char)103;
int zero = 0;
unsigned long long int var_20 = 15304044081089944392ULL;
unsigned long long int var_21 = 5370010857857737318ULL;
unsigned long long int var_22 = 4279600587411502963ULL;
signed char var_23 = (signed char)107;
unsigned short var_24 = (unsigned short)23179;
signed char var_25 = (signed char)-108;
_Bool var_26 = (_Bool)0;
int var_27 = -260624940;
unsigned long long int var_28 = 8379832036879087228ULL;
short var_29 = (short)-16858;
unsigned long long int var_30 = 8831734398137841730ULL;
unsigned long long int var_31 = 6700684028045266ULL;
long long int arr_1 [18] ;
short arr_2 [18] ;
signed char arr_3 [18] [18] [18] ;
unsigned short arr_4 [18] [18] ;
unsigned int arr_5 [18] [18] ;
int arr_6 [18] [18] [18] [18] ;
signed char arr_8 [18] [18] [18] [18] ;
signed char arr_10 [18] ;
signed char arr_11 [10] ;
int arr_12 [10] [10] ;
signed char arr_13 [10] [10] [10] ;
short arr_14 [10] ;
short arr_17 [10] ;
unsigned int arr_22 [10] [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 8621496391478308396LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-30760;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)30810;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 2454149518U : 2915927897U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 83912685 : -450281622;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = -1022891482;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (short)-25862;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)32063 : (short)-11893;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 3805089589U : 2179428466U;
}

void checksum() {
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
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
