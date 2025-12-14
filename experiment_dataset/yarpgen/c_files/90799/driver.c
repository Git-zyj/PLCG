#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
unsigned int var_2 = 4844210U;
unsigned short var_3 = (unsigned short)17802;
unsigned short var_5 = (unsigned short)24694;
unsigned int var_6 = 1823862089U;
signed char var_7 = (signed char)-37;
short var_8 = (short)29786;
signed char var_9 = (signed char)119;
int var_12 = -1043475284;
unsigned char var_13 = (unsigned char)134;
int zero = 0;
unsigned long long int var_17 = 5297030428912025324ULL;
int var_18 = -1623307659;
unsigned long long int var_19 = 3589551658141300619ULL;
unsigned long long int var_20 = 2967926042884601438ULL;
unsigned long long int var_21 = 1048351966189522119ULL;
unsigned long long int var_22 = 8894396705821459134ULL;
signed char var_23 = (signed char)-111;
short var_24 = (short)-21623;
unsigned int var_25 = 2457504236U;
short var_26 = (short)-24895;
unsigned long long int var_27 = 16333212066331065515ULL;
unsigned long long int var_28 = 15825962847245370497ULL;
unsigned short var_29 = (unsigned short)5282;
unsigned short var_30 = (unsigned short)46328;
unsigned char var_31 = (unsigned char)26;
signed char var_32 = (signed char)46;
unsigned int var_33 = 2041802014U;
unsigned int var_34 = 3223459024U;
int var_35 = -1781902741;
unsigned int var_36 = 2500845012U;
unsigned char var_37 = (unsigned char)163;
unsigned char var_38 = (unsigned char)7;
unsigned int var_39 = 974135946U;
signed char var_40 = (signed char)40;
unsigned char var_41 = (unsigned char)188;
unsigned char arr_0 [10] [10] ;
unsigned char arr_1 [10] [10] ;
unsigned long long int arr_2 [10] [10] ;
unsigned char arr_6 [22] ;
unsigned long long int arr_10 [14] [14] ;
signed char arr_12 [14] ;
unsigned short arr_13 [14] [14] [14] ;
short arr_14 [14] ;
unsigned long long int arr_16 [14] ;
unsigned int arr_17 [14] [14] [14] [14] [14] ;
unsigned char arr_19 [14] ;
signed char arr_21 [14] [14] ;
unsigned char arr_23 [14] ;
signed char arr_30 [10] ;
unsigned char arr_37 [10] [10] ;
signed char arr_3 [10] ;
unsigned short arr_4 [10] ;
unsigned short arr_8 [22] [22] ;
signed char arr_18 [14] [14] [14] [14] ;
unsigned long long int arr_22 [14] ;
unsigned int arr_25 [14] [14] ;
unsigned long long int arr_26 [14] [14] [14] ;
long long int arr_33 [10] ;
unsigned short arr_34 [10] [10] ;
unsigned char arr_35 [10] ;
unsigned short arr_40 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 15232706988256667489ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 10503285920693306555ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)34559;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (short)-13078;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 12466457694296098932ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 3625095616U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (signed char)56 : (signed char)-5;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_37 [i_0] [i_1] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)61108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)49508;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 902053802628099982ULL : 850698202643625847ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_25 [i_0] [i_1] = 2318224315U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 11044005754046119876ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? 7488940091513419483LL : 217596224009028130LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned short)55791;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_35 [i_0] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_40 [i_0] = (unsigned short)63767;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
