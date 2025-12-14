#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60663;
unsigned char var_2 = (unsigned char)75;
unsigned long long int var_3 = 527920783774462811ULL;
unsigned long long int var_4 = 10595254244606359570ULL;
unsigned int var_5 = 1293755913U;
long long int var_6 = -5459252796733780558LL;
unsigned long long int var_7 = 14068247377997013008ULL;
unsigned int var_8 = 3742765652U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 12761389425362792941ULL;
unsigned short var_11 = (unsigned short)63628;
int zero = 0;
int var_12 = 1922640517;
short var_13 = (short)-15438;
unsigned char var_14 = (unsigned char)139;
unsigned char var_15 = (unsigned char)227;
unsigned long long int var_16 = 1135849500582285269ULL;
unsigned int var_17 = 203346044U;
unsigned int var_18 = 4152439185U;
long long int var_19 = -5749190274543734554LL;
int var_20 = -44469265;
unsigned char var_21 = (unsigned char)46;
long long int var_22 = -1778788566792833748LL;
short var_23 = (short)-7911;
signed char var_24 = (signed char)116;
long long int var_25 = 5278636356207186337LL;
unsigned short var_26 = (unsigned short)16483;
unsigned int var_27 = 2604752916U;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 2360818199U;
unsigned int var_30 = 684469800U;
_Bool var_31 = (_Bool)1;
int var_32 = -454052088;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)38;
unsigned int var_35 = 929027191U;
_Bool var_36 = (_Bool)0;
unsigned char var_37 = (unsigned char)212;
short var_38 = (short)-8902;
int var_39 = -1933297861;
unsigned short var_40 = (unsigned short)20148;
unsigned short var_41 = (unsigned short)38318;
unsigned short var_42 = (unsigned short)37365;
unsigned short var_43 = (unsigned short)36770;
signed char var_44 = (signed char)-127;
short var_45 = (short)12214;
_Bool var_46 = (_Bool)1;
unsigned int var_47 = 564513299U;
unsigned short var_48 = (unsigned short)61658;
unsigned char var_49 = (unsigned char)19;
unsigned int var_50 = 3262889842U;
short var_51 = (short)3881;
_Bool var_52 = (_Bool)1;
unsigned int var_53 = 4152061685U;
unsigned int var_54 = 1939324901U;
unsigned char var_55 = (unsigned char)41;
signed char var_56 = (signed char)-72;
short var_57 = (short)-2538;
unsigned int var_58 = 3505892043U;
short var_59 = (short)-21368;
unsigned char var_60 = (unsigned char)155;
int var_61 = 766405482;
int var_62 = -1006396026;
_Bool var_63 = (_Bool)0;
long long int var_64 = 6228085933546388763LL;
short var_65 = (short)23589;
unsigned char var_66 = (unsigned char)138;
unsigned long long int arr_4 [10] ;
_Bool arr_5 [10] [10] [10] ;
unsigned char arr_12 [10] [10] [10] [10] ;
unsigned short arr_13 [10] [10] [10] [10] ;
long long int arr_25 [14] [14] ;
long long int arr_26 [14] [14] ;
_Bool arr_31 [23] [23] ;
_Bool arr_32 [25] ;
_Bool arr_33 [25] ;
short arr_35 [25] [25] ;
int arr_41 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 18244608014887833041ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)13985;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_25 [i_0] [i_1] = -8628951077063146008LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_26 [i_0] [i_1] = 8152124595700092044LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_31 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_35 [i_0] [i_1] = (short)-11743;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_41 [i_0] [i_1] = 831060317;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
