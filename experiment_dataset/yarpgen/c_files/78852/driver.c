#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 137054172;
signed char var_1 = (signed char)-66;
signed char var_2 = (signed char)-76;
unsigned short var_3 = (unsigned short)57000;
unsigned char var_4 = (unsigned char)217;
signed char var_5 = (signed char)-31;
long long int var_6 = -6253808001470776138LL;
unsigned short var_7 = (unsigned short)30265;
int var_8 = 1977258736;
_Bool var_9 = (_Bool)0;
long long int var_10 = 6005983454396329275LL;
short var_11 = (short)-8552;
int var_12 = -1177427697;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)1510;
long long int var_15 = -4903380642536810450LL;
unsigned char var_16 = (unsigned char)188;
short var_17 = (short)14874;
long long int var_18 = 289944753487948611LL;
int var_19 = 994164172;
unsigned char var_20 = (unsigned char)217;
unsigned long long int var_21 = 14828096841771296637ULL;
signed char var_22 = (signed char)-26;
unsigned int var_23 = 1197278468U;
long long int var_24 = -2444299208557658044LL;
long long int var_25 = 3664900320798080991LL;
unsigned int var_26 = 40580512U;
unsigned short var_27 = (unsigned short)46151;
unsigned short var_28 = (unsigned short)6840;
long long int var_29 = -4832426753912351503LL;
long long int var_30 = -234430985165319962LL;
int var_31 = -1270969837;
unsigned long long int var_32 = 1660304909271939725ULL;
unsigned int var_33 = 950100629U;
unsigned char var_34 = (unsigned char)115;
int var_35 = 1457708126;
_Bool var_36 = (_Bool)0;
unsigned int var_37 = 1708450036U;
unsigned int var_38 = 1591406359U;
long long int var_39 = 6835365778933526706LL;
int var_40 = -1005979354;
long long int var_41 = -6396941303856257951LL;
signed char var_42 = (signed char)16;
signed char var_43 = (signed char)-112;
int var_44 = -1086934133;
unsigned short var_45 = (unsigned short)57880;
unsigned int var_46 = 3665562298U;
int var_47 = -1152313549;
unsigned int var_48 = 416104863U;
unsigned short var_49 = (unsigned short)50380;
short var_50 = (short)13152;
unsigned char var_51 = (unsigned char)8;
unsigned short var_52 = (unsigned short)18749;
unsigned long long int var_53 = 10148331773420474476ULL;
unsigned long long int var_54 = 4185325916491441532ULL;
unsigned long long int var_55 = 10881324273563468869ULL;
unsigned int var_56 = 787871093U;
_Bool var_57 = (_Bool)0;
unsigned long long int var_58 = 1744804408713897573ULL;
long long int var_59 = -446535551997393962LL;
long long int var_60 = 413697527459746209LL;
long long int var_61 = 3719683827143041393LL;
_Bool var_62 = (_Bool)0;
unsigned int var_63 = 94584323U;
long long int var_64 = -4458248943461467696LL;
unsigned char var_65 = (unsigned char)144;
unsigned char var_66 = (unsigned char)84;
int var_67 = 982614397;
long long int var_68 = -8251107007119374941LL;
unsigned char var_69 = (unsigned char)70;
int arr_0 [15] ;
unsigned short arr_2 [15] ;
_Bool arr_4 [15] [15] [15] ;
signed char arr_5 [15] [15] [15] ;
int arr_8 [15] [15] [15] ;
long long int arr_10 [15] [15] ;
long long int arr_13 [15] ;
unsigned char arr_16 [15] [15] ;
long long int arr_17 [15] [15] [15] [15] [15] ;
unsigned char arr_18 [15] [15] [15] [15] [15] [15] ;
_Bool arr_20 [15] [15] [15] [15] [15] ;
unsigned char arr_24 [15] [15] [15] [15] [15] [15] ;
int arr_25 [15] [15] [15] [15] ;
_Bool arr_26 [15] ;
unsigned int arr_27 [15] [15] [15] [15] [15] ;
long long int arr_28 [15] [15] [15] [15] [15] ;
short arr_30 [15] ;
unsigned short arr_35 [15] [15] [15] [15] [15] ;
long long int arr_36 [15] [15] [15] [15] ;
short arr_43 [15] [15] [15] [15] ;
unsigned char arr_49 [15] [15] [15] [15] [15] ;
unsigned char arr_52 [15] [15] [15] [15] [15] ;
unsigned int arr_57 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1517632902;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)387;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-62 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1926626626 : 1337970108;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 1188289538612718910LL : 8962716193696950137LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = -1887306953897615404LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 5844832845931940480LL : 8229008255076909428LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (unsigned char)138 : (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = -189735486;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 1468918653U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = -7454586977784926270LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = (short)25206;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)64274;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = -5526953696805642922LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)6462 : (short)-9365;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)191 : (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = 1685478760U;
}

void checksum() {
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
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
