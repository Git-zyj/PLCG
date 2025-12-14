#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35681;
long long int var_1 = 7443835948565756703LL;
int var_4 = -600054201;
signed char var_5 = (signed char)-40;
short var_6 = (short)-18973;
unsigned int var_7 = 1152225872U;
unsigned long long int var_8 = 14439813385405703389ULL;
unsigned char var_9 = (unsigned char)236;
int zero = 0;
unsigned int var_10 = 3136423243U;
long long int var_11 = 4037275826753532875LL;
int var_12 = 1363668122;
int var_13 = -1124233407;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6302760645249809599LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1957908907762181685LL;
unsigned int var_18 = 3601782626U;
unsigned int var_19 = 865402596U;
unsigned char var_20 = (unsigned char)135;
int var_21 = -1531385732;
unsigned int var_22 = 1241601859U;
unsigned long long int var_23 = 15241593669441019676ULL;
signed char var_24 = (signed char)-55;
unsigned long long int var_25 = 5869421339531608861ULL;
short var_26 = (short)-13313;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)-90;
signed char var_29 = (signed char)-89;
int var_30 = -2119575937;
unsigned int var_31 = 2951443479U;
unsigned long long int var_32 = 2963338693708768179ULL;
int var_33 = 2124390138;
long long int arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
long long int arr_5 [15] [15] [15] [15] ;
long long int arr_9 [15] [15] [15] [15] [15] ;
long long int arr_12 [17] ;
unsigned int arr_14 [17] ;
short arr_19 [17] ;
unsigned char arr_20 [21] [21] ;
long long int arr_21 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -5808601151284286081LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)6333;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 8541183356057012866LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = -3294121753526478611LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 5717612286398124161LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 2040719986U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)1915 : (short)9573;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = 3227630864893756373LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
