#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
short var_1 = (short)27857;
short var_2 = (short)3345;
unsigned short var_3 = (unsigned short)50868;
signed char var_4 = (signed char)-18;
long long int var_6 = -5319301071018659475LL;
signed char var_7 = (signed char)109;
unsigned long long int var_8 = 9811314230609985704ULL;
int var_9 = 901810521;
_Bool var_10 = (_Bool)1;
long long int var_11 = 1241680983208204956LL;
unsigned int var_12 = 3728961989U;
int zero = 0;
long long int var_13 = 2477416054430282854LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)180;
unsigned char var_16 = (unsigned char)72;
unsigned short var_17 = (unsigned short)56725;
unsigned long long int var_18 = 9930031474499711056ULL;
unsigned short var_19 = (unsigned short)52438;
long long int var_20 = -7053688728299131623LL;
long long int var_21 = 2953711963920667086LL;
long long int var_22 = -8646330049323106272LL;
unsigned short var_23 = (unsigned short)29398;
int var_24 = -63575813;
unsigned short var_25 = (unsigned short)50738;
unsigned long long int var_26 = 10257008280863717679ULL;
unsigned short var_27 = (unsigned short)4895;
signed char var_28 = (signed char)121;
unsigned short var_29 = (unsigned short)13364;
int var_30 = 485246898;
int var_31 = -330135695;
unsigned short var_32 = (unsigned short)36900;
int var_33 = -1623579989;
unsigned short var_34 = (unsigned short)27507;
unsigned int var_35 = 2325367323U;
unsigned long long int var_36 = 4032849260663981222ULL;
int var_37 = -46165643;
unsigned int var_38 = 2960270313U;
unsigned short var_39 = (unsigned short)5747;
long long int var_40 = 8153625187524641472LL;
long long int var_41 = -8017730976957423198LL;
unsigned char var_42 = (unsigned char)95;
unsigned int var_43 = 3466667050U;
unsigned int var_44 = 3795162515U;
long long int var_45 = -6285243376345744564LL;
_Bool var_46 = (_Bool)1;
_Bool var_47 = (_Bool)0;
signed char var_48 = (signed char)28;
signed char arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
signed char arr_2 [24] [24] [24] ;
long long int arr_3 [24] [24] [24] ;
long long int arr_4 [24] ;
unsigned long long int arr_5 [16] ;
unsigned char arr_6 [16] ;
unsigned short arr_7 [16] ;
int arr_8 [16] ;
short arr_9 [16] ;
unsigned int arr_10 [16] [16] [16] ;
long long int arr_12 [16] [16] [16] [16] ;
unsigned short arr_13 [16] [16] [16] [16] ;
short arr_14 [16] [16] [16] [16] ;
signed char arr_15 [16] [16] ;
_Bool arr_20 [16] [16] [16] [16] [16] [16] [16] ;
unsigned char arr_22 [16] [16] [16] [16] [16] [16] ;
int arr_24 [16] [16] [16] [16] [16] ;
unsigned short arr_25 [16] [16] [16] [16] [16] ;
unsigned long long int arr_32 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1436478230U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-61 : (signed char)-112;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -125635015439112914LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -4864283227980131074LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 13807101565864735526ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)34480;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 2030150820 : 317908187;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (short)9626;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1716181946U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 258079443442783804LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)17154;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)-7453;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = -1788734435;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)39565;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17237488374165783735ULL : 16842533315104486947ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
