#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1626220251;
_Bool var_1 = (_Bool)1;
int var_2 = 1540409870;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 863105188U;
long long int var_8 = -6952524722645597243LL;
signed char var_10 = (signed char)-63;
signed char var_11 = (signed char)70;
unsigned int var_12 = 3025672321U;
unsigned short var_13 = (unsigned short)13510;
long long int var_14 = -4632873207226999446LL;
unsigned int var_16 = 894281770U;
int zero = 0;
unsigned char var_17 = (unsigned char)94;
signed char var_18 = (signed char)-34;
int var_19 = -1160743533;
unsigned int var_20 = 1236780028U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)41727;
long long int var_23 = -203668946423878060LL;
long long int var_24 = 7672039076698320167LL;
long long int var_25 = 6662444063200577742LL;
short var_26 = (short)17292;
unsigned short var_27 = (unsigned short)47680;
unsigned int var_28 = 2448473155U;
unsigned short var_29 = (unsigned short)27320;
int var_30 = 1603890748;
long long int var_31 = 1275993637755200661LL;
long long int var_32 = -2967677497975516994LL;
unsigned char var_33 = (unsigned char)187;
_Bool arr_1 [19] ;
long long int arr_2 [19] [19] ;
int arr_3 [19] ;
unsigned char arr_7 [19] [19] ;
unsigned int arr_11 [20] ;
long long int arr_13 [20] [20] [20] ;
unsigned int arr_14 [20] [20] [20] ;
unsigned long long int arr_15 [20] [20] [20] ;
int arr_16 [20] [20] [20] [20] ;
unsigned short arr_19 [20] [20] ;
signed char arr_21 [20] [20] [20] ;
unsigned int arr_4 [19] ;
signed char arr_9 [19] [19] ;
long long int arr_18 [20] [20] [20] ;
long long int arr_22 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -5557119783714481110LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 840792901;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 3226189069U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -8309316413675122811LL : -7122443839283129965LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 2072993218U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 16620437427337337197ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -1865643734;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)49755;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2257440465U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -9144428103939594313LL : -8700097698322545648LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -3592127972418354348LL : -1635155584945782326LL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
