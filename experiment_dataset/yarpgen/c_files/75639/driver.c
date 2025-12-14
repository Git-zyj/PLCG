#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30632;
short var_3 = (short)13721;
unsigned long long int var_4 = 17115796124041960601ULL;
short var_5 = (short)13353;
unsigned char var_6 = (unsigned char)102;
unsigned int var_7 = 3913955757U;
unsigned long long int var_8 = 13732500669275666812ULL;
int var_9 = 442889664;
unsigned long long int var_10 = 17446222066081456818ULL;
short var_11 = (short)25507;
unsigned long long int var_12 = 2790530262646420821ULL;
signed char var_13 = (signed char)87;
unsigned short var_14 = (unsigned short)4788;
short var_16 = (short)14425;
short var_17 = (short)-28944;
unsigned long long int var_18 = 15398748325592873621ULL;
int zero = 0;
long long int var_19 = 7486433460668851434LL;
unsigned char var_20 = (unsigned char)120;
signed char var_21 = (signed char)62;
unsigned long long int var_22 = 14547924691110205699ULL;
short var_23 = (short)16808;
unsigned short var_24 = (unsigned short)39649;
unsigned char var_25 = (unsigned char)251;
unsigned int var_26 = 3891697752U;
signed char var_27 = (signed char)40;
unsigned char var_28 = (unsigned char)34;
unsigned int var_29 = 298982208U;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 2918723070U;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 5911445768065240833ULL;
unsigned int var_34 = 1187771722U;
unsigned int var_35 = 1257794035U;
unsigned int var_36 = 1337973563U;
short var_37 = (short)5152;
unsigned short var_38 = (unsigned short)13359;
short var_39 = (short)24960;
int var_40 = -1021891440;
_Bool var_41 = (_Bool)0;
signed char var_42 = (signed char)-82;
signed char var_43 = (signed char)31;
short var_44 = (short)11218;
unsigned long long int var_45 = 3323584190857646732ULL;
unsigned long long int var_46 = 2839321321582296580ULL;
signed char var_47 = (signed char)126;
unsigned int var_48 = 1839704833U;
unsigned long long int var_49 = 15395567299647050344ULL;
unsigned int var_50 = 829727908U;
int var_51 = -959795066;
unsigned int var_52 = 1631620107U;
_Bool var_53 = (_Bool)1;
unsigned char var_54 = (unsigned char)224;
long long int var_55 = 3667227570562304640LL;
long long int var_56 = 3655361879099569723LL;
unsigned long long int var_57 = 4950335407432229454ULL;
unsigned int var_58 = 768473172U;
unsigned int var_59 = 148690163U;
unsigned char var_60 = (unsigned char)2;
unsigned char var_61 = (unsigned char)236;
unsigned int arr_2 [23] ;
unsigned short arr_4 [23] ;
unsigned short arr_7 [23] ;
unsigned int arr_8 [23] [23] [23] ;
_Bool arr_12 [23] [23] [23] [23] ;
unsigned long long int arr_13 [23] [23] [23] [23] ;
_Bool arr_15 [23] [23] [23] [23] [23] [23] [23] ;
signed char arr_17 [23] [23] [23] [23] [23] [23] [23] ;
signed char arr_21 [23] ;
unsigned int arr_23 [23] [23] [23] [23] [23] [23] [23] ;
_Bool arr_24 [23] [23] [23] ;
unsigned long long int arr_33 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2456840695U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)9874;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)42728;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 803406880U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 17869530404870215911ULL : 2437331300437972355ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 128187278U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 14929221381701596585ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
