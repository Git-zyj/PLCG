#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-93;
signed char var_2 = (signed char)80;
signed char var_3 = (signed char)87;
unsigned char var_4 = (unsigned char)170;
unsigned char var_7 = (unsigned char)212;
unsigned char var_11 = (unsigned char)51;
unsigned int var_14 = 1149480994U;
unsigned short var_17 = (unsigned short)15757;
int zero = 0;
signed char var_19 = (signed char)45;
unsigned short var_20 = (unsigned short)32290;
unsigned short var_21 = (unsigned short)239;
short var_22 = (short)7805;
unsigned char var_23 = (unsigned char)149;
unsigned char var_24 = (unsigned char)183;
unsigned char var_25 = (unsigned char)36;
unsigned char var_26 = (unsigned char)32;
unsigned char var_27 = (unsigned char)43;
unsigned int var_28 = 2281586104U;
unsigned char var_29 = (unsigned char)76;
unsigned short var_30 = (unsigned short)711;
unsigned int var_31 = 446418430U;
unsigned short var_32 = (unsigned short)25337;
unsigned short var_33 = (unsigned short)18794;
unsigned short var_34 = (unsigned short)21143;
unsigned short var_35 = (unsigned short)8689;
unsigned short var_36 = (unsigned short)37432;
unsigned short var_37 = (unsigned short)43293;
unsigned short var_38 = (unsigned short)3704;
short var_39 = (short)1092;
unsigned char var_40 = (unsigned char)38;
unsigned char var_41 = (unsigned char)77;
unsigned int var_42 = 1231825945U;
unsigned int var_43 = 452729083U;
short var_44 = (short)-2388;
unsigned char arr_0 [18] [18] ;
unsigned short arr_1 [18] [18] ;
unsigned int arr_2 [18] ;
unsigned short arr_3 [18] [18] [18] ;
unsigned short arr_5 [18] [18] [18] ;
unsigned short arr_6 [18] ;
unsigned char arr_7 [18] [18] [18] [18] ;
unsigned int arr_8 [18] [18] [18] [18] [18] ;
unsigned short arr_9 [18] [18] [18] [18] [18] [18] ;
unsigned char arr_10 [18] [18] [18] [18] [18] ;
unsigned short arr_11 [18] [18] [18] [18] [18] [18] ;
short arr_12 [18] [18] [18] ;
unsigned char arr_13 [18] [18] ;
unsigned int arr_14 [18] ;
unsigned short arr_15 [18] ;
unsigned int arr_16 [18] [18] [18] ;
unsigned char arr_17 [18] [18] [18] ;
unsigned short arr_20 [18] [18] ;
signed char arr_22 [13] ;
signed char arr_24 [14] [14] ;
unsigned int arr_25 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)51917;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3330279044U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)29004;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)49301;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)10492;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 2315191635U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned short)42875 : (unsigned short)35330;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)16700;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)7470;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 1047331763U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (unsigned short)54320;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 669675007U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)321;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)31 : (signed char)23;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 2826527382U : 2089831286U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
