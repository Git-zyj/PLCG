#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
unsigned char var_1 = (unsigned char)70;
long long int var_2 = 4088079344953585514LL;
long long int var_3 = -6437575737713667129LL;
unsigned int var_4 = 2106612988U;
unsigned char var_6 = (unsigned char)194;
unsigned char var_7 = (unsigned char)244;
signed char var_8 = (signed char)74;
unsigned int var_9 = 588868519U;
signed char var_10 = (signed char)-83;
signed char var_11 = (signed char)84;
unsigned long long int var_13 = 8229739845366181249ULL;
long long int var_14 = 4756501718398609247LL;
unsigned int var_15 = 3785577316U;
int zero = 0;
unsigned long long int var_17 = 9301663184755465901ULL;
long long int var_18 = -4598647223237868630LL;
signed char var_19 = (signed char)-75;
unsigned char var_20 = (unsigned char)90;
unsigned int var_21 = 2930896562U;
unsigned char var_22 = (unsigned char)141;
unsigned char var_23 = (unsigned char)5;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 6689771710446391346ULL;
unsigned char var_26 = (unsigned char)192;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)31;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)42;
_Bool var_31 = (_Bool)1;
int var_32 = -2054501308;
signed char var_33 = (signed char)73;
short var_34 = (short)5013;
_Bool var_35 = (_Bool)1;
unsigned int var_36 = 789514081U;
unsigned int arr_12 [22] [22] [22] [22] ;
unsigned long long int arr_19 [22] [22] [22] [22] ;
int arr_22 [22] ;
unsigned char arr_29 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2193652469U : 99738129U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 14005353255623033780ULL : 8542634211914135818ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 853722340 : -218320872;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (unsigned char)179 : (unsigned char)86;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
