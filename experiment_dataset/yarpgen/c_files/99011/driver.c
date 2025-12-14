#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6702301739638091676LL;
unsigned long long int var_1 = 107411722563638209ULL;
unsigned short var_3 = (unsigned short)49420;
long long int var_5 = -6908578327835797149LL;
short var_6 = (short)4394;
int var_8 = 156707829;
_Bool var_9 = (_Bool)0;
int var_10 = 45874367;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5492354304754893599ULL;
short var_13 = (short)15391;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = 2113878599;
unsigned long long int var_16 = 6500728425551197716ULL;
short var_17 = (short)6246;
long long int var_18 = -3549528109436606866LL;
signed char var_19 = (signed char)-19;
short var_20 = (short)-12248;
int var_21 = -1487538509;
_Bool var_22 = (_Bool)0;
short var_23 = (short)11020;
unsigned long long int var_24 = 5281831914077155218ULL;
long long int var_25 = -4013872156653296686LL;
signed char var_26 = (signed char)-82;
_Bool arr_0 [15] ;
unsigned short arr_2 [15] ;
unsigned long long int arr_6 [23] ;
unsigned int arr_8 [14] [14] ;
int arr_9 [14] ;
long long int arr_12 [14] ;
short arr_15 [14] [14] [14] ;
long long int arr_3 [15] ;
unsigned long long int arr_4 [15] ;
unsigned long long int arr_5 [15] [15] ;
int arr_16 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)13089;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 668379537145481955ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 4045995616U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = -259157469;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -1195425764644323909LL : -6764810946786594144LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)22145;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 7428065114612999303LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 13328198643938960909ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 8183251969743812023ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 2125629214 : 2064737549;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
