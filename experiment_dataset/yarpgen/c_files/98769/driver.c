#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8665275980896166657ULL;
long long int var_1 = -3090010366235723663LL;
short var_2 = (short)-6682;
signed char var_3 = (signed char)-121;
unsigned long long int var_4 = 18213518271404751705ULL;
long long int var_5 = -563258722590166859LL;
long long int var_6 = -524504609704179195LL;
unsigned int var_8 = 3496585095U;
int var_9 = -826884352;
int zero = 0;
short var_10 = (short)10015;
int var_11 = -437914191;
long long int var_12 = 6118003300711799105LL;
unsigned long long int var_13 = 14475813828617950629ULL;
unsigned long long int var_14 = 12885593528034744778ULL;
unsigned int var_15 = 1115415231U;
signed char var_16 = (signed char)-122;
unsigned long long int var_17 = 15629982823603670314ULL;
unsigned char var_18 = (unsigned char)56;
signed char var_19 = (signed char)-25;
long long int var_20 = 3289526849080649166LL;
short var_21 = (short)5364;
unsigned long long int var_22 = 15970410312351419915ULL;
signed char var_23 = (signed char)-49;
unsigned long long int var_24 = 6434814990170521601ULL;
unsigned char var_25 = (unsigned char)107;
unsigned long long int var_26 = 7304005998874180564ULL;
short var_27 = (short)-1849;
unsigned long long int var_28 = 12008662955729499333ULL;
unsigned char var_29 = (unsigned char)125;
long long int var_30 = 8124743870298157638LL;
int var_31 = -639352917;
unsigned long long int var_32 = 4264658319909593021ULL;
long long int var_33 = -3461444548926831138LL;
unsigned long long int var_34 = 1182667834040707199ULL;
unsigned char var_35 = (unsigned char)132;
signed char var_36 = (signed char)17;
unsigned char var_37 = (unsigned char)109;
signed char var_38 = (signed char)38;
long long int var_39 = 4072361467212963481LL;
short var_40 = (short)13286;
unsigned int var_41 = 3716757469U;
int var_42 = 95533070;
unsigned char var_43 = (unsigned char)210;
int var_44 = 1379026648;
unsigned long long int var_45 = 7613960452072448499ULL;
long long int var_46 = 2738688911168761139LL;
long long int arr_0 [20] ;
unsigned long long int arr_2 [20] ;
unsigned long long int arr_3 [21] ;
unsigned char arr_5 [21] [21] ;
long long int arr_7 [21] [21] [21] ;
unsigned long long int arr_8 [21] [21] [21] ;
long long int arr_9 [21] [21] [21] ;
unsigned long long int arr_10 [21] [21] [21] [21] ;
unsigned int arr_15 [21] [21] ;
unsigned int arr_17 [21] [21] [21] [21] ;
int arr_20 [21] [21] [21] ;
unsigned int arr_27 [19] ;
unsigned char arr_29 [19] ;
short arr_33 [19] [19] ;
signed char arr_39 [19] [19] ;
unsigned long long int arr_43 [19] [19] [19] [19] ;
unsigned char arr_11 [21] [21] ;
short arr_18 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_25 [21] [21] [21] ;
unsigned char arr_30 [19] ;
unsigned long long int arr_31 [19] [19] ;
short arr_45 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -7556053705847291935LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 17317543208781532025ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 12880142646493962065ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 6689509611530151689LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6345789369242371008ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -8203561751454386680LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 4774491189884344569ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = 1714255280U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 948384483U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -706939323 : 370171795;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = 1809896969U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_33 [i_0] [i_1] = (short)16433;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_39 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)44 : (signed char)-18;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = 14195002156711995730ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)148 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (short)24474 : (short)-23030;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)173 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = 14344856321228087986ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-28353 : (short)4377;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
