#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-125;
signed char var_2 = (signed char)54;
long long int var_3 = 3590633760439605768LL;
unsigned long long int var_4 = 1581020205791866397ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 12376236235075029116ULL;
unsigned char var_8 = (unsigned char)69;
unsigned int var_9 = 2762803822U;
unsigned short var_11 = (unsigned short)31192;
short var_14 = (short)29983;
int zero = 0;
unsigned int var_15 = 2472016444U;
signed char var_16 = (signed char)-125;
long long int var_17 = -3394921748161785934LL;
signed char var_18 = (signed char)83;
unsigned short var_19 = (unsigned short)12976;
unsigned long long int var_20 = 8838900675301706742ULL;
unsigned char var_21 = (unsigned char)62;
signed char var_22 = (signed char)-103;
long long int var_23 = -6923661227263478170LL;
signed char var_24 = (signed char)-104;
long long int var_25 = -7510652249847803153LL;
unsigned char var_26 = (unsigned char)14;
unsigned int var_27 = 1938635422U;
unsigned long long int var_28 = 3558490367982193172ULL;
unsigned char var_29 = (unsigned char)163;
long long int var_30 = -8987688981086339966LL;
unsigned char var_31 = (unsigned char)239;
signed char var_32 = (signed char)28;
unsigned int var_33 = 2907305931U;
signed char var_34 = (signed char)51;
long long int var_35 = -3311494569744801591LL;
unsigned long long int var_36 = 15846725025243838778ULL;
unsigned short var_37 = (unsigned short)50570;
signed char var_38 = (signed char)-113;
signed char var_39 = (signed char)16;
unsigned char var_40 = (unsigned char)236;
unsigned char var_41 = (unsigned char)16;
int var_42 = -256545444;
long long int var_43 = 7111918684571097001LL;
unsigned short var_44 = (unsigned short)56379;
long long int var_45 = -7828384694490314722LL;
unsigned long long int var_46 = 18077800086778057296ULL;
unsigned char var_47 = (unsigned char)72;
_Bool var_48 = (_Bool)1;
unsigned char var_49 = (unsigned char)109;
long long int var_50 = 4866101675479326059LL;
unsigned long long int var_51 = 9188140967230072845ULL;
unsigned char var_52 = (unsigned char)88;
signed char var_53 = (signed char)61;
short var_54 = (short)-1610;
_Bool var_55 = (_Bool)1;
long long int var_56 = 5781899717843129089LL;
long long int var_57 = 8622899450495388686LL;
unsigned long long int var_58 = 1047430400377426846ULL;
long long int var_59 = 2599713033337350160LL;
long long int var_60 = -5259315946353815274LL;
signed char var_61 = (signed char)-111;
unsigned int var_62 = 3537194158U;
int var_63 = 1215258538;
unsigned long long int var_64 = 3151255413160950418ULL;
unsigned char var_65 = (unsigned char)255;
unsigned short var_66 = (unsigned short)22320;
unsigned short var_67 = (unsigned short)2595;
unsigned int var_68 = 1176216952U;
_Bool var_69 = (_Bool)0;
unsigned char var_70 = (unsigned char)134;
unsigned long long int var_71 = 8894129693044891966ULL;
long long int var_72 = 3982220749432555902LL;
int arr_0 [10] ;
short arr_1 [10] ;
unsigned long long int arr_2 [10] ;
int arr_4 [10] [10] [10] ;
unsigned char arr_6 [10] [10] [10] [10] ;
unsigned int arr_7 [10] [10] [10] ;
signed char arr_8 [10] [10] [10] ;
unsigned short arr_9 [10] [10] [10] [10] ;
unsigned int arr_10 [10] ;
unsigned int arr_11 [10] [10] [10] [10] ;
unsigned char arr_12 [10] [10] [10] [10] [10] ;
signed char arr_14 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_15 [10] [10] [10] [10] [10] ;
short arr_16 [10] [10] [10] [10] ;
signed char arr_17 [10] [10] [10] [10] [10] ;
unsigned int arr_18 [10] [10] [10] [10] ;
long long int arr_20 [10] [10] [10] ;
short arr_25 [10] [10] ;
long long int arr_26 [10] [10] [10] [10] [10] ;
long long int arr_30 [10] [10] [10] ;
unsigned short arr_32 [10] [10] [10] [10] ;
signed char arr_35 [10] [10] ;
short arr_38 [10] ;
signed char arr_40 [10] ;
signed char arr_52 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1105968189 : -536265500;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-30882;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 13295341917682519866ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -535058220;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3165324335U : 3522395188U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)21284;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 1276403877U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4172357461U : 3367746692U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (signed char)123 : (signed char)58;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)49209;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (short)3038;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 3757182018U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 762304919563581022LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)9659 : (short)19749;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 6337609288429108719LL : -3540389477140718859LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 1798615894305716967LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (unsigned short)55319;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_35 [i_0] [i_1] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_38 [i_0] = (short)-7910;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_40 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_52 [i_0] = (signed char)72;
}

void checksum() {
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
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
