#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2591973075341825072LL;
unsigned long long int var_1 = 9674159001141284709ULL;
signed char var_2 = (signed char)-20;
long long int var_3 = -2409387695773084782LL;
unsigned long long int var_4 = 7194009232106358797ULL;
unsigned int var_5 = 1750816892U;
unsigned short var_6 = (unsigned short)22809;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)74;
long long int var_9 = -294107194334337282LL;
unsigned int var_10 = 2517406137U;
int zero = 0;
int var_11 = -328135422;
signed char var_12 = (signed char)16;
unsigned short var_13 = (unsigned short)35791;
int var_14 = 1992343482;
signed char var_15 = (signed char)43;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)28401;
signed char var_18 = (signed char)106;
short var_19 = (short)28587;
unsigned char arr_0 [18] ;
unsigned short arr_2 [18] ;
short arr_4 [18] [18] ;
unsigned short arr_5 [18] ;
int arr_6 [18] ;
unsigned int arr_10 [18] ;
short arr_17 [18] ;
unsigned short arr_19 [18] [18] [18] [18] ;
unsigned long long int arr_3 [18] ;
unsigned long long int arr_12 [18] ;
unsigned short arr_13 [18] [18] [18] [18] ;
signed char arr_14 [18] [18] [18] [18] ;
unsigned short arr_15 [18] [18] [18] [18] ;
unsigned int arr_22 [18] [18] [18] ;
int arr_25 [17] ;
int arr_26 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)5471;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)19086;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)32895;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -197194134;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3902633560U : 1788076312U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)-8148 : (short)2391;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned short)34391;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 7883940908457430466ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3330096734903154217ULL : 789124650174645908ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)58762 : (unsigned short)53631;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-41 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)10759 : (unsigned short)9585;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1220736571U : 70861212U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = -102260801;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = -2043405845;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
