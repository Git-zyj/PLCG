#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13120;
signed char var_5 = (signed char)-19;
long long int var_6 = -9104492170401915699LL;
unsigned short var_7 = (unsigned short)8035;
long long int var_10 = 2384390843249125888LL;
long long int var_11 = 1097932700004174089LL;
long long int var_12 = 2956932559708450338LL;
unsigned short var_13 = (unsigned short)22372;
unsigned short var_14 = (unsigned short)31548;
signed char var_17 = (signed char)127;
int zero = 0;
unsigned short var_20 = (unsigned short)23254;
signed char var_21 = (signed char)-97;
unsigned short var_22 = (unsigned short)61186;
long long int var_23 = 5018734653698914097LL;
signed char var_24 = (signed char)-36;
signed char var_25 = (signed char)50;
long long int var_26 = 7129624484774351427LL;
signed char var_27 = (signed char)40;
long long int var_28 = 5383284785154109320LL;
long long int var_29 = 4508640899339681341LL;
signed char var_30 = (signed char)125;
signed char var_31 = (signed char)111;
signed char var_32 = (signed char)127;
unsigned short var_33 = (unsigned short)63888;
long long int var_34 = 2447326729295561156LL;
unsigned short var_35 = (unsigned short)38977;
unsigned short arr_0 [22] ;
signed char arr_1 [22] ;
unsigned short arr_3 [23] ;
long long int arr_4 [23] ;
long long int arr_7 [23] [23] ;
unsigned short arr_10 [23] [23] [23] [23] ;
signed char arr_12 [23] [23] ;
signed char arr_13 [23] ;
signed char arr_14 [23] [23] [23] [23] ;
unsigned short arr_16 [23] ;
unsigned short arr_2 [22] ;
signed char arr_8 [23] [23] ;
signed char arr_15 [23] [23] [23] [23] [23] [23] ;
signed char arr_18 [23] ;
unsigned short arr_26 [23] [23] [23] [23] [23] [23] ;
unsigned short arr_27 [23] [23] ;
unsigned short arr_31 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)19556;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)12987;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 7658903515334026337LL : 3434306236793499222LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 7728667641809081201LL : -5515617053237441218LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)46725;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-16 : (signed char)-74;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (unsigned short)62482;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)57949;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)122 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (signed char)51 : (signed char)96;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)49 : (signed char)-78;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)16474 : (unsigned short)64963;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)41983 : (unsigned short)13106;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_31 [i_0] = (unsigned short)53155;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
