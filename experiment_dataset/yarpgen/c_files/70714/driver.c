#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3969628535128282823LL;
unsigned long long int var_1 = 18310405678670017853ULL;
int var_2 = 1662827035;
int var_3 = 1298045799;
unsigned int var_4 = 1827739305U;
_Bool var_5 = (_Bool)0;
long long int var_6 = 6991486380687003052LL;
long long int var_7 = 4559583108635966283LL;
long long int var_8 = -3807368376557318995LL;
int var_9 = -1765476271;
signed char var_10 = (signed char)102;
int var_11 = -1766963789;
int var_12 = -791413477;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -2470984894862946885LL;
int var_16 = 159100727;
unsigned int var_17 = 227918923U;
int zero = 0;
unsigned long long int var_18 = 14126784865238320119ULL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7027776072579444875ULL;
int var_22 = 286387992;
unsigned long long int var_23 = 6926887891653008409ULL;
_Bool var_24 = (_Bool)0;
int var_25 = -1851500709;
unsigned short var_26 = (unsigned short)9334;
unsigned int var_27 = 1616291909U;
_Bool var_28 = (_Bool)0;
int var_29 = -134656088;
int var_30 = 610117228;
signed char var_31 = (signed char)58;
_Bool var_32 = (_Bool)0;
short var_33 = (short)3416;
unsigned int var_34 = 1991640463U;
_Bool var_35 = (_Bool)1;
unsigned long long int var_36 = 12737446678514656221ULL;
unsigned char var_37 = (unsigned char)102;
signed char var_38 = (signed char)9;
int var_39 = 1569041886;
unsigned char var_40 = (unsigned char)108;
long long int var_41 = -4980872142302244979LL;
_Bool var_42 = (_Bool)1;
long long int var_43 = 9038924489075956205LL;
unsigned long long int var_44 = 8747137856330575626ULL;
long long int var_45 = 4749442170115100533LL;
short var_46 = (short)12464;
_Bool var_47 = (_Bool)1;
short var_48 = (short)3313;
signed char var_49 = (signed char)60;
long long int var_50 = -8503930165327207187LL;
int var_51 = 1256420024;
long long int var_52 = -4214557150050946370LL;
int var_53 = 777398988;
unsigned char var_54 = (unsigned char)174;
unsigned short var_55 = (unsigned short)3849;
unsigned char var_56 = (unsigned char)213;
signed char var_57 = (signed char)-13;
long long int var_58 = 5097528759664870433LL;
unsigned int var_59 = 1529097126U;
long long int var_60 = -5114618487495905216LL;
signed char var_61 = (signed char)-59;
unsigned long long int var_62 = 10447412524711963922ULL;
unsigned short var_63 = (unsigned short)4650;
long long int var_64 = -8966957539204158587LL;
int var_65 = 1068319111;
long long int var_66 = 8951845687267720699LL;
signed char var_67 = (signed char)73;
unsigned long long int var_68 = 4448469429205127978ULL;
unsigned int arr_0 [21] ;
short arr_1 [21] ;
unsigned int arr_3 [21] [21] ;
int arr_4 [21] [21] [21] ;
int arr_6 [21] [21] [21] ;
unsigned long long int arr_7 [21] [21] ;
_Bool arr_8 [21] [21] ;
long long int arr_9 [21] [21] [21] ;
unsigned char arr_10 [21] [21] [21] [21] ;
signed char arr_11 [21] ;
signed char arr_16 [21] ;
_Bool arr_19 [21] [21] [21] [21] ;
unsigned long long int arr_20 [21] [21] ;
signed char arr_22 [21] [21] [21] [21] ;
unsigned char arr_23 [21] [21] [21] [21] [21] ;
unsigned int arr_25 [21] [21] [21] ;
int arr_31 [21] [21] [21] [21] ;
long long int arr_34 [21] ;
unsigned char arr_36 [21] [21] [21] ;
unsigned long long int arr_37 [21] [21] [21] ;
_Bool arr_39 [21] [21] [21] [21] ;
long long int arr_41 [21] [21] [21] [21] ;
long long int arr_43 [21] [21] [21] ;
unsigned char arr_53 [12] [12] ;
short arr_13 [21] ;
unsigned char arr_21 [21] [21] [21] [21] [21] ;
long long int arr_26 [21] ;
unsigned char arr_32 [21] [21] [21] [21] [21] [21] ;
unsigned long long int arr_33 [21] ;
unsigned char arr_44 [21] [21] [21] ;
unsigned short arr_47 [21] [21] [21] ;
long long int arr_48 [21] [21] ;
unsigned char arr_51 [17] ;
unsigned short arr_56 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 462527956U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-6016;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 1533138603U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2100767191;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1869995751 : -1411755133;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1796085908463043053ULL : 89086389163131201ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -2141642325999779360LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = 17558624946632194227ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 887615587U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 1635950616;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_34 [i_0] = 4522013196814458350LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 18140050071873841903ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 8751857463599649114LL : 7111688174690917869LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 388892386094581066LL : -1090509417522097956LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_53 [i_0] [i_1] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (short)-19480;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = -4589468641125286718LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_33 [i_0] = 15967237188032273263ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)112 : (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)12261 : (unsigned short)35121;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_48 [i_0] [i_1] = (i_1 % 2 == 0) ? -7578055352181748390LL : -3177081916184323331LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_51 [i_0] = (i_0 % 2 == 0) ? (unsigned char)170 : (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_56 [i_0] [i_1] = (unsigned short)38539;
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
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
