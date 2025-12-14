#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned long long int var_1 = 14639607041950847125ULL;
unsigned short var_2 = (unsigned short)25520;
unsigned short var_3 = (unsigned short)35591;
long long int var_4 = -8741341228272787685LL;
unsigned long long int var_5 = 16388022841017640122ULL;
unsigned long long int var_6 = 14755102195256526543ULL;
unsigned short var_7 = (unsigned short)39170;
unsigned short var_8 = (unsigned short)63889;
long long int var_9 = 4435110270769817522LL;
unsigned short var_10 = (unsigned short)61961;
unsigned long long int var_11 = 10321378297019061949ULL;
unsigned short var_13 = (unsigned short)31444;
unsigned long long int var_14 = 17854912376623996744ULL;
unsigned short var_15 = (unsigned short)23613;
long long int var_17 = 3830087506830987945LL;
int zero = 0;
long long int var_18 = 4852218391708585942LL;
int var_19 = 389197569;
long long int var_20 = -7311738748753989566LL;
unsigned short var_21 = (unsigned short)12461;
unsigned short var_22 = (unsigned short)174;
unsigned short var_23 = (unsigned short)39075;
long long int var_24 = 7866569831285639160LL;
unsigned short var_25 = (unsigned short)1250;
int var_26 = -1707604234;
long long int var_27 = -374417159052386428LL;
long long int var_28 = 5147493259574648871LL;
unsigned long long int var_29 = 11497345535458406986ULL;
unsigned long long int var_30 = 11783009140204300012ULL;
unsigned long long int var_31 = 3797531708933735095ULL;
long long int var_32 = -7733859280831480044LL;
long long int var_33 = 6761137131574605665LL;
int var_34 = -1356901833;
long long int var_35 = -1695028413963971614LL;
unsigned char var_36 = (unsigned char)30;
long long int var_37 = -7843337622198054596LL;
unsigned short var_38 = (unsigned short)23424;
unsigned short var_39 = (unsigned short)57416;
unsigned short var_40 = (unsigned short)62018;
long long int var_41 = -7643828548593385980LL;
unsigned short var_42 = (unsigned short)47156;
unsigned long long int var_43 = 13839909171754649632ULL;
signed char var_44 = (signed char)14;
int var_45 = 593264129;
unsigned long long int var_46 = 7733568946395140808ULL;
long long int var_47 = -5147009435095592587LL;
unsigned short var_48 = (unsigned short)52643;
int var_49 = -865057588;
unsigned long long int arr_0 [13] [13] ;
long long int arr_9 [13] [13] [13] [13] [13] [13] ;
long long int arr_10 [13] [13] [13] [13] ;
signed char arr_11 [13] [13] [13] [13] [13] ;
unsigned short arr_16 [19] ;
long long int arr_17 [19] ;
unsigned long long int arr_18 [19] ;
unsigned int arr_19 [19] ;
int arr_20 [19] [19] ;
long long int arr_21 [19] [19] [19] [19] ;
unsigned short arr_23 [19] ;
long long int arr_24 [19] [19] [19] [19] ;
long long int arr_25 [19] [19] [19] [19] [19] ;
signed char arr_29 [19] [19] [19] [19] ;
long long int arr_45 [19] [19] ;
unsigned long long int arr_55 [11] [11] [11] [11] [11] ;
long long int arr_57 [11] [11] [11] [11] [11] ;
unsigned long long int arr_68 [13] ;
int arr_14 [13] ;
long long int arr_15 [13] ;
long long int arr_36 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_46 [19] [19] ;
signed char arr_58 [11] [11] [11] [11] [11] ;
unsigned short arr_64 [11] [11] [11] [11] [11] [11] [11] ;
unsigned short arr_69 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 16845786458880471576ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1957923652107590217LL : 1506796374227522910LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -7531225902328631840LL : 825393901881506439LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-124 : (signed char)72;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42404 : (unsigned short)23657;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -8153981659458878549LL : -2011107767891173902LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 17375913488354707615ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = 4074711647U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = 470072964;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 4457300465564955435LL : 6367882954409715769LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (unsigned short)931;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -6415557137643109599LL : 1427793137117897516LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 5031100498682104687LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_45 [i_0] [i_1] = -2882269977203352203LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = 11742455770345027090ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_57 [i_0] [i_1] [i_2] [i_3] [i_4] = 389798445344054672LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_68 [i_0] = 9462989373784467424ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 368650809;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 7395582485936302893LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 8107713085954304463LL : 3616660113710412711LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_46 [i_0] [i_1] = (i_1 % 2 == 0) ? 6227973625623489888ULL : 8880871467565070439ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)58893;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_69 [i_0] = (unsigned short)64165;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_58 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                hash(&seed, arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_69 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
