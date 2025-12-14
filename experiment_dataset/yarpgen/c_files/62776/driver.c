#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5725247602673586745LL;
long long int var_3 = -4394521233561823791LL;
long long int var_6 = 5952863542835904783LL;
unsigned short var_7 = (unsigned short)40323;
unsigned int var_8 = 1877618196U;
unsigned int var_9 = 337516036U;
unsigned short var_10 = (unsigned short)55888;
unsigned short var_11 = (unsigned short)35553;
int zero = 0;
long long int var_14 = 1127483118484055170LL;
unsigned short var_15 = (unsigned short)57900;
unsigned int var_16 = 1085472325U;
long long int var_17 = -678948364659765717LL;
unsigned int var_18 = 1129892503U;
long long int var_19 = 1988065228044474673LL;
unsigned int var_20 = 69328672U;
unsigned int var_21 = 503222135U;
unsigned int var_22 = 2007506906U;
unsigned int var_23 = 2134800893U;
long long int arr_0 [15] ;
unsigned short arr_1 [15] ;
long long int arr_5 [12] ;
unsigned short arr_16 [18] [18] ;
long long int arr_22 [18] [18] [18] [18] ;
unsigned short arr_2 [15] ;
long long int arr_3 [15] ;
unsigned short arr_4 [15] ;
unsigned short arr_13 [12] ;
long long int arr_17 [18] ;
unsigned int arr_23 [18] [18] [18] [18] ;
long long int arr_24 [18] [18] ;
unsigned short arr_25 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 7440382604362252588LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)6808;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -2753617982116250692LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)30612;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 3985499213161586641LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)12643;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -2981439832512394235LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)46681;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (unsigned short)62492;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -6476963679899797025LL : 1250456130730195138LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1708304291U : 3800768451U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? -4956833058668511446LL : -8436582934941045429LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)47307 : (unsigned short)8757;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
