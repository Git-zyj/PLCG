#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 43884448U;
unsigned char var_1 = (unsigned char)232;
_Bool var_2 = (_Bool)0;
unsigned char var_8 = (unsigned char)124;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)69;
long long int var_14 = 1655093891675126217LL;
unsigned int var_15 = 2221961867U;
unsigned short var_16 = (unsigned short)45243;
short var_17 = (short)10457;
unsigned long long int var_19 = 8319495817085648405ULL;
int zero = 0;
unsigned long long int var_20 = 6208254226297044453ULL;
_Bool var_21 = (_Bool)0;
long long int var_22 = -6909893140819371854LL;
unsigned long long int var_23 = 13531506348855356145ULL;
unsigned int var_24 = 1109976757U;
long long int var_25 = 2580992498132494076LL;
unsigned int var_26 = 975946205U;
long long int var_27 = 3614182250624313851LL;
unsigned long long int var_28 = 10523183750123067084ULL;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)0;
long long int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
long long int arr_2 [14] [14] ;
long long int arr_3 [14] [14] ;
_Bool arr_4 [14] [14] [14] ;
unsigned long long int arr_6 [14] [14] [14] [14] ;
unsigned long long int arr_7 [14] [14] [14] [14] ;
short arr_8 [14] [14] [14] [14] ;
_Bool arr_9 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -4906993210623744352LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 18430393597477602961ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 615453264829520662LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = -6540816848403891967LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 16791668491839408589ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1859113677151179249ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)23282;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
