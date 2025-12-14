#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2817595329U;
unsigned char var_1 = (unsigned char)142;
unsigned int var_3 = 2896205265U;
short var_4 = (short)-31760;
unsigned long long int var_5 = 3005439272620951418ULL;
signed char var_6 = (signed char)-40;
unsigned long long int var_7 = 9803182935793509295ULL;
unsigned char var_8 = (unsigned char)210;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 3635128584185770972ULL;
int var_14 = 468232497;
unsigned short var_15 = (unsigned short)59172;
int zero = 0;
signed char var_17 = (signed char)20;
signed char var_18 = (signed char)-64;
short var_19 = (short)6553;
unsigned int var_20 = 2324242459U;
unsigned short var_21 = (unsigned short)59179;
long long int var_22 = 4110909253991244803LL;
_Bool var_23 = (_Bool)0;
int var_24 = -1810878758;
unsigned int var_25 = 4102731852U;
unsigned short var_26 = (unsigned short)1467;
short var_27 = (short)-11099;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 262366526823271518ULL;
_Bool var_30 = (_Bool)0;
short var_31 = (short)-15889;
unsigned char var_32 = (unsigned char)78;
unsigned long long int var_33 = 15600923723282851365ULL;
short var_34 = (short)-27796;
short var_35 = (short)-7917;
unsigned char var_36 = (unsigned char)154;
short var_37 = (short)-6373;
long long int var_38 = 6533274440162235769LL;
short var_39 = (short)10431;
_Bool var_40 = (_Bool)0;
unsigned int var_41 = 3929093311U;
int var_42 = -746084813;
unsigned long long int var_43 = 10861700604586631020ULL;
int var_44 = -1794033612;
unsigned char var_45 = (unsigned char)228;
signed char var_46 = (signed char)-21;
unsigned int var_47 = 490569217U;
unsigned long long int var_48 = 14052412695966921652ULL;
unsigned short arr_0 [17] [17] ;
signed char arr_1 [17] [17] ;
_Bool arr_2 [17] ;
unsigned int arr_3 [17] [17] ;
unsigned long long int arr_5 [17] ;
signed char arr_6 [17] [17] ;
int arr_7 [17] [17] ;
_Bool arr_8 [17] ;
unsigned long long int arr_9 [17] [17] [17] ;
unsigned char arr_10 [17] [17] [17] ;
short arr_11 [17] [17] ;
_Bool arr_13 [17] [17] [17] [17] ;
signed char arr_14 [17] [17] ;
unsigned char arr_19 [17] ;
signed char arr_21 [17] [17] [17] ;
_Bool arr_22 [17] [17] [17] [17] [17] [17] ;
unsigned short arr_24 [17] [17] [17] [17] [17] ;
unsigned char arr_27 [17] ;
_Bool arr_30 [17] ;
short arr_35 [17] [17] ;
signed char arr_38 [17] [17] [17] [17] [17] [17] ;
unsigned char arr_39 [17] ;
signed char arr_47 [13] ;
short arr_53 [13] [13] ;
unsigned int arr_62 [17] [17] [17] [17] ;
_Bool arr_66 [17] [17] [17] [17] ;
unsigned long long int arr_4 [17] ;
unsigned long long int arr_15 [17] [17] [17] ;
unsigned long long int arr_18 [17] [17] [17] ;
unsigned int arr_28 [17] [17] [17] [17] [17] ;
unsigned int arr_41 [17] ;
_Bool arr_42 [17] ;
unsigned char arr_45 [17] ;
short arr_50 [13] [13] [13] ;
short arr_54 [13] ;
long long int arr_55 [13] ;
int arr_58 [17] [17] ;
_Bool arr_59 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)38131;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 3526421879U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 14578414859101573278ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = -1988998814;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 15936659776311276147ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)227 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (short)7736;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-24 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)24448;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_27 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_35 [i_0] [i_1] = (short)-15181;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (signed char)26 : (signed char)-14;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_39 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_47 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_53 [i_0] [i_1] = (short)-6003;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_62 [i_0] [i_1] [i_2] [i_3] = 3020505183U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_66 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 12230779923249068043ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3466010375553870666ULL : 2118404496342771171ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 6555264865570069468ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 2536258402U : 871156784U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_41 [i_0] = 1264931678U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_42 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_45 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (short)23661;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_54 [i_0] = (short)23793;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_55 [i_0] = 48080930377002964LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_58 [i_0] [i_1] = (i_1 % 2 == 0) ? -460397791 : -2104947598;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_59 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_50 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_58 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_59 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
