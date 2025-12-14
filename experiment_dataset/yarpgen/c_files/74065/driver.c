#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned long long int var_3 = 3222824344147351062ULL;
signed char var_4 = (signed char)-126;
unsigned int var_5 = 2483003436U;
unsigned int var_6 = 1451885263U;
signed char var_7 = (signed char)4;
unsigned long long int var_8 = 8824415576784121583ULL;
signed char var_9 = (signed char)-112;
signed char var_10 = (signed char)8;
signed char var_11 = (signed char)60;
unsigned short var_12 = (unsigned short)43361;
unsigned long long int var_13 = 9369988459830073925ULL;
unsigned long long int var_14 = 3357322405181785177ULL;
int zero = 0;
unsigned long long int var_15 = 13096927350888205942ULL;
unsigned long long int var_16 = 12976215428751564331ULL;
unsigned long long int var_17 = 14920838186903763149ULL;
unsigned short var_18 = (unsigned short)63420;
signed char var_19 = (signed char)-14;
signed char var_20 = (signed char)-18;
unsigned short var_21 = (unsigned short)34824;
unsigned long long int var_22 = 16501007473683978978ULL;
signed char var_23 = (signed char)-61;
signed char var_24 = (signed char)-13;
unsigned int var_25 = 2509828355U;
int var_26 = 347479761;
unsigned short var_27 = (unsigned short)62441;
signed char var_28 = (signed char)-81;
signed char var_29 = (signed char)92;
signed char var_30 = (signed char)-53;
signed char arr_0 [11] ;
unsigned long long int arr_1 [11] ;
signed char arr_2 [11] ;
signed char arr_4 [11] [11] [11] ;
signed char arr_6 [11] ;
int arr_10 [11] ;
unsigned long long int arr_11 [11] [11] ;
unsigned short arr_12 [11] [11] [11] [11] ;
signed char arr_15 [11] [11] [11] [11] ;
signed char arr_22 [11] [11] [11] ;
unsigned short arr_23 [11] [11] [11] [11] [11] ;
signed char arr_27 [18] ;
signed char arr_30 [18] [18] ;
unsigned long long int arr_31 [18] [18] [18] ;
signed char arr_7 [11] ;
signed char arr_8 [11] [11] ;
signed char arr_25 [11] [11] ;
unsigned int arr_32 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 4043169217146117229ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = -873524499;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = 7521929059578191168ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47331;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)15653;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_27 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_30 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 16387000361026306164ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_32 [i_0] [i_1] = 2810619201U;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
