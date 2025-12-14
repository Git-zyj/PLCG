#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3758775625U;
unsigned long long int var_1 = 11311974565084658718ULL;
unsigned long long int var_2 = 16757799914452396623ULL;
unsigned long long int var_3 = 1298385296986628888ULL;
unsigned long long int var_4 = 17595923646613335861ULL;
int var_5 = -573843092;
int var_6 = -2007540375;
_Bool var_7 = (_Bool)1;
int var_8 = 44769593;
unsigned int var_9 = 367243962U;
long long int var_10 = 4601966423180146283LL;
long long int var_11 = 6750603726843589019LL;
int var_12 = -768566094;
unsigned long long int var_13 = 15533694498476017927ULL;
int var_14 = 1296795103;
unsigned long long int var_15 = 5495182692111010612ULL;
int var_16 = -1413057285;
int var_17 = -862874915;
int zero = 0;
unsigned int var_18 = 844963877U;
long long int var_19 = -1672509267422606586LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -5001667484556388001LL;
long long int var_22 = 1420668166445505554LL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 18059212679577927211ULL;
unsigned long long int var_25 = 6696429440247392325ULL;
unsigned int var_26 = 2363859929U;
unsigned int var_27 = 3700134463U;
int var_28 = 815099383;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 2478476192U;
unsigned int var_31 = 3864780426U;
unsigned int var_32 = 2762939287U;
unsigned long long int var_33 = 17598118411339405363ULL;
unsigned long long int var_34 = 4949358602273672131ULL;
unsigned long long int var_35 = 1050070003613183392ULL;
_Bool var_36 = (_Bool)0;
_Bool var_37 = (_Bool)0;
unsigned int var_38 = 2039207728U;
unsigned int var_39 = 843890976U;
int var_40 = 1176197804;
unsigned long long int var_41 = 380775479916696685ULL;
unsigned long long int var_42 = 6646134664528337460ULL;
long long int var_43 = -5375680007116644527LL;
unsigned int var_44 = 2339550878U;
_Bool var_45 = (_Bool)0;
unsigned int var_46 = 534632035U;
long long int var_47 = 3703182195769739379LL;
_Bool var_48 = (_Bool)0;
unsigned int var_49 = 1951890333U;
long long int var_50 = 247723250941618335LL;
long long int arr_6 [23] ;
unsigned long long int arr_9 [23] [23] ;
unsigned long long int arr_26 [23] ;
_Bool arr_31 [23] [23] [23] ;
int arr_32 [23] [23] [23] ;
unsigned long long int arr_36 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 4011935856908942694LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 2448657203417986699ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 3931386523990455384ULL : 9623193036312890122ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1238061754 : 1108358238;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3723599500948384334ULL : 11846033599754309746ULL;
}

void checksum() {
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
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
