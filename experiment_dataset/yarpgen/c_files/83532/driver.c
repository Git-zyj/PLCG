#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1961333880;
unsigned long long int var_1 = 15011104417581599392ULL;
unsigned long long int var_2 = 1216397734767557829ULL;
int var_3 = -1918982874;
long long int var_5 = -9041737842180064562LL;
unsigned int var_6 = 360826182U;
unsigned long long int var_7 = 17338526752068525165ULL;
int var_8 = -644779279;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 6999920771494891831LL;
unsigned short var_11 = (unsigned short)22810;
long long int var_12 = 1147409233192431478LL;
unsigned long long int var_13 = 16958188028463569351ULL;
int var_14 = 1562783285;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1506887050491549440LL;
_Bool var_17 = (_Bool)1;
long long int var_18 = -4713204771374167124LL;
unsigned int var_19 = 1807089552U;
int var_20 = -603095652;
unsigned short var_21 = (unsigned short)53001;
unsigned char var_22 = (unsigned char)31;
long long int var_23 = -3280902820519102357LL;
short var_24 = (short)-26492;
unsigned char var_25 = (unsigned char)72;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-4184;
_Bool var_28 = (_Bool)1;
long long int var_29 = -9145220853258017311LL;
long long int var_30 = -5219012648347351515LL;
long long int var_31 = 5747945845803638758LL;
unsigned long long int var_32 = 17694533838030996596ULL;
_Bool var_33 = (_Bool)0;
short var_34 = (short)7334;
unsigned short var_35 = (unsigned short)49573;
long long int var_36 = -3281835784266529661LL;
unsigned long long int var_37 = 327293823924790802ULL;
short var_38 = (short)-5514;
unsigned short var_39 = (unsigned short)31985;
unsigned int var_40 = 4135070714U;
int var_41 = -1823719637;
_Bool var_42 = (_Bool)1;
unsigned int var_43 = 536185329U;
unsigned long long int var_44 = 7372150676806126556ULL;
unsigned long long int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
unsigned short arr_2 [20] [20] [20] ;
unsigned int arr_3 [20] [20] [20] ;
unsigned char arr_4 [20] [20] ;
short arr_5 [20] [20] ;
long long int arr_6 [20] [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
unsigned short arr_10 [20] [20] ;
long long int arr_11 [20] ;
int arr_12 [20] [20] [20] ;
unsigned char arr_13 [20] [20] [20] ;
long long int arr_16 [20] [20] [20] [20] ;
unsigned int arr_18 [20] [20] [20] [20] ;
unsigned int arr_21 [20] ;
unsigned long long int arr_22 [20] [20] [20] [20] [20] ;
unsigned int arr_26 [20] [20] [20] [20] [20] [20] ;
int arr_27 [20] [20] [20] [20] [20] [20] ;
_Bool arr_28 [20] [20] [20] [20] ;
long long int arr_30 [20] [20] [20] [20] ;
_Bool arr_32 [20] [20] ;
_Bool arr_29 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 12858316353382683054ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 8452493092496413176ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)12479 : (unsigned short)53876;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1511253009U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-18556 : (short)-32308;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 6177942255817721982LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 18338373637354379233ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)50524 : (unsigned short)15688;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 4099854188833835109LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -438537041 : 258539568;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -3141427954102954660LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 4044966759U : 2260403799U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = 4233173348U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 604365655858212090ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3726234968U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1873549127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 2135837398840971186LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_32 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
