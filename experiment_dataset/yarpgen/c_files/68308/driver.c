#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned short var_1 = (unsigned short)7620;
short var_2 = (short)-9682;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)51;
unsigned int var_5 = 2429901122U;
unsigned char var_6 = (unsigned char)143;
long long int var_7 = -5649855724236385628LL;
long long int var_8 = -4843180499926279971LL;
unsigned long long int var_9 = 3101102977419608097ULL;
long long int var_10 = -1680649250893198598LL;
unsigned int var_11 = 2772113040U;
unsigned short var_12 = (unsigned short)40068;
int zero = 0;
int var_13 = 692325143;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 88003565U;
unsigned short var_16 = (unsigned short)2844;
short var_17 = (short)25942;
unsigned short var_18 = (unsigned short)43736;
long long int var_19 = -5366719378779351298LL;
signed char var_20 = (signed char)91;
short var_21 = (short)-23411;
short var_22 = (short)-30171;
unsigned short var_23 = (unsigned short)32867;
_Bool var_24 = (_Bool)1;
int arr_10 [14] [14] ;
long long int arr_11 [14] [14] [14] ;
unsigned char arr_12 [14] ;
int arr_21 [14] ;
long long int arr_22 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 586762338 : -1863934156;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 597916192145103694LL : -8831038163964440425LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)127 : (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = 27480049;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 3625705023486922642LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
