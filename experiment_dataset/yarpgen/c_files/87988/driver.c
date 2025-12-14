#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9868359486444198591ULL;
signed char var_1 = (signed char)63;
unsigned long long int var_2 = 5000432106306001675ULL;
unsigned long long int var_3 = 6569199909235254893ULL;
unsigned int var_4 = 1367706146U;
unsigned int var_5 = 2609441425U;
long long int var_6 = 6379690031064849346LL;
unsigned int var_7 = 3881547208U;
unsigned long long int var_8 = 14906700868964084578ULL;
unsigned int var_9 = 506819365U;
unsigned int var_10 = 2241476711U;
unsigned int var_11 = 360663907U;
signed char var_12 = (signed char)126;
signed char var_13 = (signed char)-24;
long long int var_14 = -1104550632645060110LL;
long long int var_15 = 4467478875259784729LL;
signed char var_16 = (signed char)-75;
long long int var_17 = 4745349639575526297LL;
unsigned int var_18 = 678509083U;
unsigned int var_19 = 2249438947U;
int zero = 0;
unsigned int var_20 = 2287616537U;
unsigned int var_21 = 2894416122U;
unsigned long long int var_22 = 9330670478042004879ULL;
unsigned long long int var_23 = 7870920466868444815ULL;
signed char var_24 = (signed char)38;
unsigned long long int var_25 = 12446565798487544019ULL;
long long int var_26 = 3206919092344854656LL;
signed char var_27 = (signed char)62;
unsigned long long int var_28 = 16756176884134710714ULL;
unsigned int var_29 = 995180898U;
long long int var_30 = -5981344069694799007LL;
signed char var_31 = (signed char)-73;
long long int var_32 = 3133338008742798803LL;
signed char arr_0 [11] ;
long long int arr_1 [11] [11] ;
unsigned int arr_2 [11] ;
long long int arr_4 [16] ;
unsigned int arr_5 [16] ;
unsigned long long int arr_6 [16] ;
signed char arr_7 [16] ;
long long int arr_11 [16] ;
long long int arr_14 [16] ;
signed char arr_16 [16] [16] [16] ;
unsigned int arr_17 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_18 [16] [16] [16] [16] [16] ;
unsigned int arr_19 [16] [16] [16] [16] [16] [16] ;
long long int arr_20 [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_21 [18] ;
long long int arr_23 [18] ;
unsigned int arr_24 [18] ;
unsigned long long int arr_25 [18] [18] [18] ;
unsigned long long int arr_26 [18] ;
unsigned int arr_27 [18] [18] [18] [18] ;
unsigned long long int arr_28 [18] [18] ;
long long int arr_3 [11] [11] ;
unsigned long long int arr_8 [16] ;
unsigned long long int arr_9 [16] [16] ;
unsigned int arr_29 [18] [18] [18] ;
unsigned long long int arr_30 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -7031714092316382468LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2447896502U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 5640178194910446090LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 3745530555U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 9791528686265506857ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = -3320537474558801038LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -5144132181434934737LL : 4880683429844651659LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-9 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4175364751U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 4159037141U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1167727575U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -3397074375662666197LL : -6802515064547509730LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 16786293622584342148ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = -371236456946914961LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = 998336575U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 10311740004246866686ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = 7242862752778868092ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 1369151958U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_28 [i_0] [i_1] = 15836674353613866911ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -7168475791294574932LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 12071515959403826810ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 2921213515100622987ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 845795589U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 5576389870314459061ULL;
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
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
