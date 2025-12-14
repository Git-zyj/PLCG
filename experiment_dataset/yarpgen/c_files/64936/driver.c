#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8127472695190307689ULL;
int zero = 0;
short var_10 = (short)-12186;
signed char var_11 = (signed char)77;
unsigned short var_12 = (unsigned short)6942;
unsigned long long int var_13 = 5424628986078446932ULL;
unsigned short var_14 = (unsigned short)23098;
int var_15 = 706125669;
long long int var_16 = -6471090420425339928LL;
unsigned long long int var_17 = 4198520839436081847ULL;
int var_18 = 1856045775;
short var_19 = (short)-11902;
unsigned int var_20 = 2722436091U;
int var_21 = 1311427548;
unsigned short arr_0 [25] ;
_Bool arr_4 [24] ;
unsigned long long int arr_5 [24] ;
unsigned char arr_7 [24] [24] [24] [24] ;
unsigned short arr_9 [24] [24] [24] ;
signed char arr_10 [24] ;
unsigned char arr_12 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)31107;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 14569524838658661729ULL : 18418161474599685515ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)9872 : (unsigned short)23566;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)183;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
