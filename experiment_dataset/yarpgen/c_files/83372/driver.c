#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned char var_1 = (unsigned char)85;
unsigned char var_2 = (unsigned char)51;
_Bool var_3 = (_Bool)0;
int var_9 = 745684925;
int var_10 = 992606410;
unsigned short var_13 = (unsigned short)13444;
int zero = 0;
unsigned short var_14 = (unsigned short)30871;
unsigned int var_15 = 1473773341U;
unsigned int var_16 = 656074711U;
long long int var_17 = 1807350058367236301LL;
long long int var_18 = -9220526582493501352LL;
long long int var_19 = 8441207308369266296LL;
int var_20 = -1862545070;
signed char var_21 = (signed char)-76;
long long int var_22 = -1221237896103178091LL;
unsigned int var_23 = 2174927223U;
int var_24 = -316819832;
signed char var_25 = (signed char)-61;
signed char var_26 = (signed char)-126;
int var_27 = -1148561619;
unsigned char var_28 = (unsigned char)157;
short var_29 = (short)5638;
unsigned long long int var_30 = 17597914313542751573ULL;
unsigned short var_31 = (unsigned short)7113;
signed char var_32 = (signed char)-78;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)22800;
unsigned char var_35 = (unsigned char)146;
int var_36 = -1894236767;
unsigned short var_37 = (unsigned short)10015;
unsigned short var_38 = (unsigned short)13667;
int arr_0 [14] ;
short arr_1 [14] ;
unsigned short arr_2 [14] ;
signed char arr_4 [14] ;
unsigned short arr_5 [14] [14] ;
signed char arr_6 [14] [14] [14] ;
unsigned long long int arr_9 [14] [14] [14] [14] [14] [14] ;
short arr_13 [14] [14] [14] [14] [14] [14] ;
int arr_17 [14] [14] [14] [14] ;
long long int arr_18 [14] [14] [14] ;
unsigned short arr_21 [14] [14] [14] [14] ;
short arr_26 [14] [14] ;
long long int arr_32 [14] ;
_Bool arr_34 [14] [14] [14] [14] ;
unsigned char arr_43 [20] ;
signed char arr_44 [20] [20] ;
int arr_45 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -1435728686;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)18066 : (short)-12715;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)64863;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)4305;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 17101966625672664240ULL : 3663399627672331977ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-27782;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1094622633 : 1802405824;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 5167784794439834330LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)7722;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_26 [i_0] [i_1] = (short)-16081;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_32 [i_0] = 382137587927588042LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_43 [i_0] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_44 [i_0] [i_1] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_45 [i_0] = 1656817837;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
