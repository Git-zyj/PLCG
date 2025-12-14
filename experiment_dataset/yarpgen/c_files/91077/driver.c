#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4259351002U;
unsigned char var_1 = (unsigned char)231;
long long int var_2 = 4457454046868778332LL;
unsigned long long int var_4 = 7093804358386378459ULL;
short var_5 = (short)-23165;
unsigned int var_6 = 1475717585U;
unsigned long long int var_8 = 17056441895937174571ULL;
unsigned long long int var_10 = 15894748639502585893ULL;
unsigned short var_11 = (unsigned short)21691;
unsigned char var_12 = (unsigned char)67;
unsigned char var_13 = (unsigned char)76;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -1507011918;
unsigned short var_16 = (unsigned short)29127;
int var_17 = 1119617914;
unsigned int var_18 = 3893588069U;
short var_19 = (short)27829;
unsigned int var_20 = 2473494659U;
short var_21 = (short)-26753;
unsigned int var_22 = 3392749474U;
signed char var_23 = (signed char)10;
unsigned int var_24 = 2479575703U;
unsigned long long int var_25 = 17189971653194640242ULL;
_Bool var_26 = (_Bool)1;
short var_27 = (short)28641;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)0;
unsigned int arr_1 [24] [24] ;
unsigned long long int arr_8 [24] [24] [24] [24] ;
unsigned int arr_9 [24] [24] [24] [24] ;
unsigned long long int arr_10 [24] [24] [24] [24] ;
signed char arr_11 [24] [24] [24] [24] ;
int arr_15 [23] ;
unsigned short arr_21 [23] [23] [23] [23] ;
unsigned short arr_22 [22] ;
unsigned long long int arr_4 [24] ;
int arr_30 [19] ;
unsigned long long int arr_31 [19] ;
unsigned char arr_32 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 50451465U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 10091605293393678954ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3296546848U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 11932538874322291370ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 1437957497;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)3755;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (unsigned short)46920;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 9450660111877628489ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = 1172574833;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = 17097297042285079105ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_32 [i_0] = (unsigned char)44;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
