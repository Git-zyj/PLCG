#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)151;
unsigned char var_6 = (unsigned char)40;
unsigned short var_7 = (unsigned short)33384;
long long int var_10 = -4002013358302659898LL;
int var_13 = 1319764704;
int zero = 0;
unsigned long long int var_17 = 16567006300417584120ULL;
unsigned char var_18 = (unsigned char)143;
signed char var_19 = (signed char)-90;
long long int var_20 = -6836151835195452339LL;
long long int var_21 = 7281607744706545418LL;
unsigned short var_22 = (unsigned short)32812;
signed char var_23 = (signed char)-94;
unsigned long long int var_24 = 12443637188408326154ULL;
unsigned short var_25 = (unsigned short)31847;
unsigned short var_26 = (unsigned short)55552;
unsigned short var_27 = (unsigned short)45150;
unsigned long long int var_28 = 794040433408535974ULL;
unsigned char var_29 = (unsigned char)22;
short var_30 = (short)-19031;
unsigned long long int var_31 = 16399013680299111603ULL;
unsigned char var_32 = (unsigned char)183;
unsigned short arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned char arr_4 [10] ;
long long int arr_6 [18] ;
long long int arr_7 [18] [18] ;
signed char arr_11 [18] [18] [18] ;
short arr_15 [18] [18] [18] [18] ;
long long int arr_16 [18] [18] [18] ;
signed char arr_24 [18] ;
unsigned short arr_2 [11] ;
signed char arr_26 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)62642;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -7822129082369810317LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = -3180699824174999473LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)14 : (signed char)-78;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-4699 : (short)-18573;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -8389186201844947229LL : 2943116613446561241LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (signed char)47 : (signed char)101;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)48738;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-69 : (signed char)-77;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
