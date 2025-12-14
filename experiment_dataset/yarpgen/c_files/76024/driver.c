#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1685757299;
int var_2 = 1177135548;
unsigned long long int var_4 = 16410789421163589805ULL;
int var_5 = -1923252113;
int var_6 = -650734438;
unsigned short var_7 = (unsigned short)47903;
unsigned int var_8 = 1740370734U;
unsigned short var_10 = (unsigned short)19818;
int zero = 0;
unsigned long long int var_11 = 9159932911233357805ULL;
unsigned short var_12 = (unsigned short)33228;
unsigned short var_13 = (unsigned short)18283;
unsigned short var_14 = (unsigned short)47538;
unsigned int var_15 = 759687962U;
unsigned short var_16 = (unsigned short)3375;
unsigned int var_17 = 1455367665U;
unsigned short var_18 = (unsigned short)43601;
unsigned short var_19 = (unsigned short)38733;
unsigned char var_20 = (unsigned char)166;
unsigned short var_21 = (unsigned short)23887;
unsigned short var_22 = (unsigned short)43034;
unsigned int var_23 = 3194151231U;
unsigned long long int var_24 = 12564143081448073138ULL;
unsigned long long int var_25 = 5336907628393775190ULL;
unsigned short var_26 = (unsigned short)31703;
unsigned long long int var_27 = 9234718159290091652ULL;
unsigned short var_28 = (unsigned short)478;
int var_29 = -1243166213;
unsigned long long int var_30 = 15299176572613751468ULL;
unsigned char var_31 = (unsigned char)59;
int var_32 = 590174550;
unsigned int var_33 = 3453364034U;
unsigned long long int var_34 = 3430089027636879182ULL;
unsigned short var_35 = (unsigned short)47056;
unsigned long long int var_36 = 9610570685532922462ULL;
int var_37 = 2101846236;
unsigned char var_38 = (unsigned char)127;
unsigned short var_39 = (unsigned short)56395;
unsigned short var_40 = (unsigned short)45439;
unsigned char var_41 = (unsigned char)179;
int var_42 = -97863350;
unsigned int var_43 = 2458446234U;
unsigned long long int var_44 = 6405592998872885977ULL;
unsigned long long int var_45 = 2257658542555969652ULL;
unsigned int arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
unsigned short arr_2 [10] [10] [10] ;
unsigned char arr_3 [10] [10] ;
unsigned short arr_4 [10] ;
unsigned short arr_5 [10] ;
unsigned short arr_7 [10] [10] ;
unsigned long long int arr_8 [10] ;
unsigned int arr_9 [10] [10] ;
unsigned short arr_10 [10] [10] ;
unsigned short arr_11 [10] [10] [10] [10] [10] ;
unsigned int arr_12 [10] [10] ;
unsigned int arr_13 [10] ;
unsigned char arr_14 [10] [10] [10] ;
unsigned short arr_16 [10] [10] [10] ;
unsigned long long int arr_17 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_18 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_19 [10] ;
unsigned char arr_20 [10] [10] [10] [10] ;
unsigned int arr_21 [10] [10] [10] [10] [10] ;
unsigned int arr_23 [10] [10] [10] [10] ;
unsigned short arr_27 [10] ;
int arr_28 [10] [10] [10] [10] ;
unsigned short arr_29 [10] [10] [10] [10] ;
unsigned int arr_34 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1681086629U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)64018;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)46568;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)26936;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)48459;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)23313;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 11473729249009375272ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 1735310047U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)54454;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)50407;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 1119689405U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 1266733612U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)215 : (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)37710 : (unsigned short)53326;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 15371919789609287805ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)2631;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = 427226194U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 2448711509U : 142267707U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 2420299281U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25056 : (unsigned short)54487;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -2043875880 : -1166311675;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16446;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 541877659U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
