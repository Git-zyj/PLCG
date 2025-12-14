#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60195;
unsigned long long int var_1 = 7535197329245767466ULL;
signed char var_2 = (signed char)-97;
unsigned short var_3 = (unsigned short)26960;
unsigned char var_4 = (unsigned char)150;
signed char var_5 = (signed char)-67;
unsigned short var_6 = (unsigned short)43440;
short var_7 = (short)-5816;
unsigned int var_8 = 2198816974U;
unsigned long long int var_9 = 13615735260969236278ULL;
short var_10 = (short)-17557;
unsigned short var_11 = (unsigned short)20091;
signed char var_12 = (signed char)119;
signed char var_13 = (signed char)49;
int var_14 = -1093931773;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)174;
int zero = 0;
short var_17 = (short)-30607;
long long int var_18 = 7784969641042653807LL;
unsigned long long int var_19 = 18069532746700182124ULL;
unsigned long long int var_20 = 7027343766246342119ULL;
unsigned short var_21 = (unsigned short)8439;
int var_22 = 1315852442;
int var_23 = -1332443189;
unsigned short var_24 = (unsigned short)64785;
short var_25 = (short)5102;
short var_26 = (short)-27125;
int var_27 = -1372739323;
unsigned short var_28 = (unsigned short)37948;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)0;
signed char var_31 = (signed char)110;
unsigned char var_32 = (unsigned char)137;
_Bool var_33 = (_Bool)1;
long long int var_34 = -4548898047986539652LL;
unsigned char var_35 = (unsigned char)223;
unsigned short var_36 = (unsigned short)11375;
unsigned long long int var_37 = 910948513443190660ULL;
unsigned short var_38 = (unsigned short)48711;
unsigned char var_39 = (unsigned char)17;
unsigned short var_40 = (unsigned short)13493;
int var_41 = -1878943568;
unsigned short var_42 = (unsigned short)32727;
_Bool var_43 = (_Bool)1;
unsigned long long int var_44 = 2719289610646425817ULL;
_Bool var_45 = (_Bool)0;
unsigned short var_46 = (unsigned short)6865;
short var_47 = (short)-6713;
unsigned long long int var_48 = 9194815671593789980ULL;
short var_49 = (short)20961;
signed char var_50 = (signed char)-115;
_Bool var_51 = (_Bool)0;
unsigned char var_52 = (unsigned char)134;
unsigned int var_53 = 328032922U;
unsigned short var_54 = (unsigned short)36493;
_Bool var_55 = (_Bool)0;
unsigned int var_56 = 2919273231U;
unsigned short var_57 = (unsigned short)33780;
signed char var_58 = (signed char)-74;
unsigned long long int var_59 = 6975553722116164749ULL;
unsigned short var_60 = (unsigned short)26869;
long long int var_61 = 1825273397848615944LL;
unsigned short var_62 = (unsigned short)53314;
short var_63 = (short)-6028;
unsigned short arr_0 [23] ;
signed char arr_1 [23] ;
_Bool arr_3 [23] [23] ;
short arr_5 [23] [23] [23] [23] ;
unsigned long long int arr_6 [23] ;
unsigned int arr_7 [18] [18] ;
short arr_8 [18] ;
unsigned short arr_9 [18] ;
int arr_10 [18] ;
_Bool arr_11 [18] ;
short arr_13 [18] [18] ;
unsigned char arr_16 [18] [18] [18] ;
unsigned int arr_18 [18] [18] [18] ;
int arr_21 [18] [18] [18] ;
unsigned long long int arr_24 [18] [18] [18] [18] [18] [18] ;
_Bool arr_26 [18] [18] [18] [18] [18] ;
unsigned short arr_27 [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_28 [18] [18] ;
unsigned long long int arr_32 [18] ;
short arr_34 [18] [18] [18] ;
_Bool arr_38 [18] ;
_Bool arr_43 [18] [18] [18] [18] [18] ;
signed char arr_44 [18] [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_46 [18] [18] [18] ;
long long int arr_63 [13] [13] [13] [13] [13] [13] ;
long long int arr_67 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)22431;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-60 : (signed char)-123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-13067 : (short)-6758;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 16493347574896810430ULL : 10797313556714511857ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 2332584577U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (short)8531;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned short)37896;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = -2115696366;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (short)12233;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3819004603U : 1410186118U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1062554860 : 694525808;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2417166051652359771ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)6505;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? 9647066680913758660ULL : 8195868463558392199ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = 17470940840156296322ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (short)-25633;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7369364104468013209ULL : 18253365878719487819ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 5452477901613394958LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = 7691389310819684304LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
