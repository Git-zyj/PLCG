#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned char var_1 = (unsigned char)131;
signed char var_2 = (signed char)32;
long long int var_3 = 2389332435094833414LL;
unsigned short var_4 = (unsigned short)31859;
int var_5 = -1350625098;
signed char var_6 = (signed char)-29;
long long int var_7 = 9087856127928581333LL;
unsigned short var_9 = (unsigned short)26155;
unsigned int var_10 = 209546770U;
int var_11 = 967444439;
signed char var_12 = (signed char)103;
short var_13 = (short)9303;
int var_14 = 781176274;
signed char var_15 = (signed char)78;
int zero = 0;
signed char var_16 = (signed char)2;
unsigned int var_17 = 2643271937U;
short var_18 = (short)-10820;
unsigned int var_19 = 2313170665U;
unsigned int var_20 = 1719278392U;
long long int var_21 = -1049861907786717814LL;
long long int var_22 = -7265457640711858757LL;
long long int var_23 = -7068702638599664170LL;
long long int var_24 = 7103706938195021542LL;
unsigned char var_25 = (unsigned char)183;
unsigned char var_26 = (unsigned char)87;
unsigned int var_27 = 2247741088U;
signed char var_28 = (signed char)41;
long long int var_29 = 7190713355673965521LL;
int var_30 = -829960741;
signed char var_31 = (signed char)-106;
int var_32 = 180066153;
int var_33 = -911808698;
signed char var_34 = (signed char)17;
signed char var_35 = (signed char)-122;
short var_36 = (short)-16174;
unsigned int var_37 = 3622073979U;
_Bool var_38 = (_Bool)1;
long long int var_39 = 5475213267851708239LL;
unsigned char var_40 = (unsigned char)224;
long long int var_41 = -100935258978070579LL;
long long int var_42 = -7376535126357325628LL;
long long int var_43 = 3239670098644107670LL;
_Bool var_44 = (_Bool)0;
long long int var_45 = -4953083747441490037LL;
int var_46 = -120086877;
unsigned short var_47 = (unsigned short)16648;
unsigned short arr_0 [22] ;
int arr_1 [22] [22] ;
short arr_2 [22] ;
signed char arr_4 [22] [22] [22] ;
_Bool arr_7 [22] [22] ;
unsigned char arr_8 [22] [22] ;
unsigned short arr_9 [22] [22] [22] ;
_Bool arr_11 [22] ;
long long int arr_12 [22] [22] ;
int arr_13 [22] [22] ;
signed char arr_16 [22] [22] [22] [22] ;
long long int arr_17 [22] [22] ;
unsigned char arr_18 [22] [22] [22] ;
unsigned long long int arr_21 [22] [22] [22] [22] ;
int arr_23 [22] ;
int arr_27 [22] [22] [22] [22] [22] ;
short arr_29 [22] [22] [22] [22] ;
unsigned int arr_36 [22] ;
unsigned int arr_37 [22] [22] [22] ;
unsigned int arr_39 [22] [22] [22] ;
unsigned short arr_42 [22] [22] [22] ;
_Bool arr_48 [22] ;
int arr_51 [22] [22] [22] [22] ;
_Bool arr_3 [22] ;
unsigned long long int arr_6 [22] ;
signed char arr_10 [22] [22] [22] ;
long long int arr_14 [22] [22] [22] ;
short arr_15 [22] [22] [22] ;
signed char arr_19 [22] [22] [22] [22] ;
short arr_20 [22] ;
unsigned int arr_24 [22] [22] [22] [22] ;
unsigned char arr_31 [22] [22] [22] [22] [22] [22] ;
short arr_38 [22] [22] [22] ;
unsigned char arr_41 [22] ;
long long int arr_44 [22] ;
unsigned short arr_45 [22] [22] ;
signed char arr_46 [22] ;
short arr_54 [22] [22] [22] ;
long long int arr_55 [22] ;
unsigned char arr_60 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)24245;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 1355894989;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-2127;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)46907;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = -2468604862117312073LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = -519103170;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = -6073394940045231236LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 11163093111827012265ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = -150873040;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = -1506417707;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (short)684;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = 3044044995U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 2179578985U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 200761962U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (unsigned short)33803;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_48 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = 1638150157;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2335613954142497595ULL : 17366645418054177585ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -9209448690047908147LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)-22687;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-30 : (signed char)81;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (short)-31151 : (short)-31168;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 559755334U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (short)-21101;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_44 [i_0] = -5977153319062545822LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_45 [i_0] [i_1] = (unsigned short)13724;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_46 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (short)-11632;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_55 [i_0] = -3032555737154368412LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)166;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_54 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_60 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
