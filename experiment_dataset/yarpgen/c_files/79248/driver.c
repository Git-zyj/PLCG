#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -828589894;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)0;
unsigned short var_4 = (unsigned short)46833;
short var_5 = (short)-8062;
unsigned long long int var_6 = 14056698491521543700ULL;
unsigned short var_7 = (unsigned short)26375;
_Bool var_8 = (_Bool)0;
short var_9 = (short)7435;
short var_12 = (short)15998;
long long int var_13 = -8116180672796803765LL;
signed char var_14 = (signed char)-92;
unsigned long long int var_15 = 18434640177356934326ULL;
unsigned int var_16 = 542820485U;
signed char var_17 = (signed char)9;
unsigned char var_18 = (unsigned char)139;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 367963754;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)169;
int var_24 = 1280109686;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 170965155U;
int var_27 = -79520132;
signed char var_28 = (signed char)-24;
short var_29 = (short)-13104;
unsigned char var_30 = (unsigned char)36;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 1221952784U;
unsigned int var_33 = 1551478966U;
unsigned char var_34 = (unsigned char)9;
long long int var_35 = 1000105544331402243LL;
unsigned int var_36 = 4267514132U;
unsigned char var_37 = (unsigned char)207;
int var_38 = 2014137688;
unsigned long long int var_39 = 9235502588170982173ULL;
_Bool var_40 = (_Bool)0;
_Bool var_41 = (_Bool)0;
unsigned char var_42 = (unsigned char)97;
signed char var_43 = (signed char)12;
_Bool var_44 = (_Bool)0;
int var_45 = -228871393;
signed char var_46 = (signed char)76;
signed char var_47 = (signed char)-45;
long long int var_48 = 7844543910969447339LL;
_Bool var_49 = (_Bool)1;
short var_50 = (short)15410;
_Bool var_51 = (_Bool)0;
short var_52 = (short)32290;
int var_53 = -1674460121;
_Bool var_54 = (_Bool)0;
unsigned char var_55 = (unsigned char)8;
_Bool var_56 = (_Bool)0;
long long int var_57 = -6032347703928093890LL;
long long int var_58 = -5765951318388769260LL;
short var_59 = (short)24039;
unsigned char var_60 = (unsigned char)43;
unsigned int var_61 = 3417241641U;
unsigned int var_62 = 2238819522U;
signed char var_63 = (signed char)56;
short var_64 = (short)-22916;
unsigned short var_65 = (unsigned short)15943;
unsigned char arr_1 [22] ;
unsigned int arr_2 [22] [22] ;
unsigned long long int arr_3 [22] [22] [22] ;
unsigned char arr_5 [24] ;
short arr_6 [24] ;
long long int arr_7 [24] ;
unsigned int arr_8 [24] [24] [24] ;
signed char arr_9 [24] [24] [24] [24] ;
unsigned char arr_10 [24] ;
unsigned int arr_11 [24] [24] [24] ;
long long int arr_13 [24] [24] ;
signed char arr_18 [24] [24] [24] [24] ;
unsigned long long int arr_21 [24] [24] [24] [24] ;
int arr_22 [24] [24] [24] [24] ;
unsigned char arr_24 [24] [24] [24] [24] [24] [24] [24] ;
_Bool arr_28 [24] [24] ;
unsigned short arr_30 [24] [24] [24] ;
unsigned int arr_33 [24] [24] [24] [24] ;
unsigned char arr_38 [24] [24] ;
short arr_40 [24] [24] [24] [24] ;
unsigned char arr_42 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_43 [24] [24] ;
long long int arr_44 [24] [24] [24] ;
unsigned char arr_46 [24] [24] [24] [24] [24] ;
_Bool arr_48 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)14 : (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2801689767U : 3979107414U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3101282610767286239ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)27738;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 4094305049783741369LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1925668206U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2157536528U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = 3867221106342821998LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 13666229664858571983ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = -1970083830;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_28 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)36358 : (unsigned short)63861;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 821602760U : 857656238U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-9502 : (short)-16307;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_43 [i_0] [i_1] = (i_1 % 2 == 0) ? 4090497357U : 3800703638U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -535788910323634965LL : -4782408267986393862LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)187 : (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_48 [i_0] [i_1] = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
