#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
long long int var_1 = -6102270839379986512LL;
signed char var_2 = (signed char)74;
unsigned long long int var_4 = 17644898007570250197ULL;
unsigned int var_5 = 3842553305U;
int var_6 = -1557121872;
int var_7 = 816351758;
unsigned short var_8 = (unsigned short)4914;
unsigned long long int var_9 = 16955792251447045544ULL;
unsigned short var_10 = (unsigned short)34451;
unsigned int var_11 = 219643391U;
unsigned int var_12 = 826872385U;
int var_13 = -2087276239;
_Bool var_14 = (_Bool)1;
int var_15 = 640778612;
int zero = 0;
unsigned long long int var_16 = 1918967620414183811ULL;
int var_17 = -1921964237;
signed char var_18 = (signed char)18;
unsigned char var_19 = (unsigned char)92;
signed char var_20 = (signed char)54;
signed char var_21 = (signed char)-7;
signed char var_22 = (signed char)82;
short var_23 = (short)29422;
signed char var_24 = (signed char)-115;
long long int var_25 = -8956321690182849123LL;
unsigned int var_26 = 1804331053U;
unsigned long long int var_27 = 11246704466959326253ULL;
unsigned int var_28 = 2230127686U;
signed char var_29 = (signed char)49;
int var_30 = -568743120;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 1748334744253011962ULL;
short var_33 = (short)-2250;
unsigned int var_34 = 3501770397U;
unsigned int var_35 = 391170188U;
signed char var_36 = (signed char)4;
unsigned char var_37 = (unsigned char)73;
signed char var_38 = (signed char)-90;
int var_39 = 1134663347;
short var_40 = (short)-8035;
int var_41 = 414442343;
unsigned long long int var_42 = 5458184330964209052ULL;
unsigned short var_43 = (unsigned short)10448;
unsigned char var_44 = (unsigned char)74;
long long int var_45 = -1251995430453550802LL;
int var_46 = -51515114;
short var_47 = (short)-9313;
short var_48 = (short)-26621;
unsigned long long int var_49 = 5252018596857607832ULL;
signed char var_50 = (signed char)78;
long long int var_51 = 4208056264458098126LL;
unsigned int var_52 = 3178623923U;
int arr_0 [15] ;
int arr_4 [15] [15] [15] ;
_Bool arr_5 [15] [15] ;
_Bool arr_6 [15] [15] ;
unsigned int arr_7 [15] ;
unsigned int arr_9 [15] [15] ;
int arr_10 [15] [15] [15] ;
unsigned short arr_12 [15] [15] [15] [15] [15] [15] ;
_Bool arr_15 [15] ;
int arr_16 [15] [15] ;
unsigned int arr_18 [15] ;
int arr_20 [15] [15] [15] [15] [15] ;
_Bool arr_24 [15] [15] [15] [15] [15] ;
_Bool arr_30 [15] [15] [15] [15] [15] ;
unsigned long long int arr_31 [15] [15] [15] [15] [15] ;
unsigned int arr_33 [15] [15] [15] [15] [15] [15] [15] ;
signed char arr_35 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2126429244;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1755318144;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 52283568U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 2038525615U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -254087281;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)4204;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = 533339870;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = 497355007U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 186546388;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = 4643259606024845043ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 232905831U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (signed char)55;
}

void checksum() {
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
