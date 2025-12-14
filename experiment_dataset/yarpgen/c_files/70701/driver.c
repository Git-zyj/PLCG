#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2755789408083741201LL;
long long int var_1 = -5629265443815439966LL;
short var_2 = (short)27357;
unsigned long long int var_3 = 6201708904179092740ULL;
long long int var_4 = 843214649267453500LL;
unsigned short var_5 = (unsigned short)6243;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3881950335U;
signed char var_8 = (signed char)2;
unsigned int var_9 = 480791963U;
unsigned short var_10 = (unsigned short)55755;
unsigned long long int var_11 = 5250896737895740299ULL;
int zero = 0;
short var_12 = (short)-10298;
unsigned int var_13 = 84123091U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-4575;
unsigned short var_16 = (unsigned short)46167;
unsigned short var_17 = (unsigned short)27839;
unsigned int var_18 = 907951630U;
unsigned short var_19 = (unsigned short)16270;
short var_20 = (short)-11239;
unsigned int var_21 = 202692966U;
short var_22 = (short)-6687;
unsigned long long int var_23 = 5601300622108734636ULL;
unsigned long long int var_24 = 2006975543326085360ULL;
long long int var_25 = -4682269863885203674LL;
unsigned short var_26 = (unsigned short)11983;
unsigned int var_27 = 586203038U;
unsigned long long int var_28 = 12355908486949899807ULL;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 1137767428U;
unsigned long long int var_31 = 12703516303555914037ULL;
long long int arr_0 [10] ;
long long int arr_1 [10] ;
_Bool arr_3 [25] ;
short arr_4 [25] ;
unsigned int arr_6 [25] ;
unsigned int arr_7 [25] [25] ;
unsigned long long int arr_8 [25] ;
unsigned int arr_9 [25] ;
_Bool arr_10 [25] [25] [25] [25] ;
unsigned long long int arr_11 [25] [25] [25] [25] ;
unsigned short arr_12 [25] [25] [25] [25] ;
unsigned int arr_13 [25] [25] [25] [25] [25] ;
short arr_14 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_17 [25] ;
unsigned short arr_18 [25] [25] [25] ;
unsigned int arr_19 [25] ;
unsigned int arr_20 [25] ;
unsigned long long int arr_2 [10] [10] ;
unsigned int arr_5 [25] ;
unsigned int arr_15 [25] [25] [25] [25] [25] ;
_Bool arr_16 [25] ;
int arr_25 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 6894978120554583999LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -4780561322138442521LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)24324;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 1097682561U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 761576111U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 15893248540003373025ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 2336965875U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 16620059528437578059ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)42190;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 1290527196U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)2943;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 1770567727U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)20541;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 1068624965U : 3256096641U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 2700033122U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 5660242613538088384ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 4146962112U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1028470206U : 2137183848U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_25 [i_0] [i_1] = -1912681567;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
