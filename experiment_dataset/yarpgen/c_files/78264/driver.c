#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4129749219U;
unsigned long long int var_1 = 6186027597740944367ULL;
_Bool var_3 = (_Bool)0;
long long int var_5 = 5713219659185811724LL;
signed char var_6 = (signed char)-36;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-106;
int var_9 = 121884755;
short var_10 = (short)31691;
unsigned int var_14 = 1801863949U;
int zero = 0;
short var_15 = (short)-1605;
int var_16 = -1866322759;
int var_17 = 167234426;
unsigned long long int var_18 = 15749316490294320151ULL;
signed char var_19 = (signed char)-65;
unsigned char var_20 = (unsigned char)147;
int var_21 = -283245698;
short var_22 = (short)-30102;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 3572850384U;
unsigned int var_25 = 793254051U;
unsigned int var_26 = 4211944532U;
short var_27 = (short)13108;
unsigned char var_28 = (unsigned char)44;
unsigned char var_29 = (unsigned char)9;
unsigned int var_30 = 1528891240U;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 14900254681200296755ULL;
long long int var_33 = -2757177314557275844LL;
unsigned long long int var_34 = 13153618779899212963ULL;
unsigned int var_35 = 4258236691U;
signed char var_36 = (signed char)-118;
unsigned int arr_1 [12] ;
signed char arr_2 [23] ;
int arr_3 [23] [23] ;
_Bool arr_4 [23] [23] [23] ;
_Bool arr_5 [23] [23] ;
unsigned long long int arr_6 [23] ;
short arr_8 [23] [23] ;
int arr_9 [23] ;
unsigned short arr_10 [23] [23] [23] ;
unsigned long long int arr_12 [23] [23] [23] [23] [23] [23] ;
signed char arr_13 [23] ;
unsigned long long int arr_16 [23] [23] [23] ;
long long int arr_26 [23] [23] [23] ;
unsigned char arr_7 [23] [23] [23] ;
short arr_14 [23] ;
unsigned int arr_20 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2466429545U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1792027178;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 11339143865005749722ULL : 15319236019705794073ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (short)31182;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 1133439968;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)33338;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8478451786291143939ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 8567854240365109741ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6785647056018827314LL : -6384356773181123435LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)0 : (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (short)10163;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 2352933052U;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
