#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11617;
signed char var_2 = (signed char)-78;
short var_3 = (short)24423;
unsigned long long int var_4 = 5709600623063783232ULL;
signed char var_6 = (signed char)-82;
unsigned long long int var_7 = 3113775404168492329ULL;
long long int var_8 = 1845159757387017520LL;
int var_9 = -1700758276;
unsigned short var_10 = (unsigned short)28639;
unsigned char var_13 = (unsigned char)28;
int zero = 0;
long long int var_17 = -6582223083870768740LL;
signed char var_18 = (signed char)-73;
short var_19 = (short)24546;
signed char var_20 = (signed char)-31;
signed char var_21 = (signed char)120;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)0;
unsigned long long int var_24 = 16360390885267506471ULL;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)11;
int var_27 = -1269279557;
long long int var_28 = -7273358896597662928LL;
short var_29 = (short)-11549;
unsigned long long int var_30 = 5164757378437319947ULL;
unsigned char var_31 = (unsigned char)122;
unsigned long long int var_32 = 10516295654480311181ULL;
unsigned short var_33 = (unsigned short)21851;
unsigned char var_34 = (unsigned char)93;
unsigned short var_35 = (unsigned short)26431;
int var_36 = -207069663;
short var_37 = (short)-18360;
short var_38 = (short)26584;
long long int var_39 = -7007549439299979725LL;
signed char arr_0 [13] ;
unsigned short arr_1 [13] ;
unsigned short arr_2 [13] [13] ;
unsigned short arr_3 [13] ;
unsigned long long int arr_8 [13] [13] [13] [13] ;
unsigned short arr_11 [13] [13] [13] [13] [13] [13] ;
signed char arr_14 [10] ;
unsigned long long int arr_15 [10] [10] ;
int arr_28 [10] [10] [10] [10] [10] [10] ;
int arr_49 [13] [13] [13] [13] [13] [13] [13] ;
unsigned short arr_12 [13] [13] [13] [13] ;
int arr_36 [13] ;
int arr_54 [11] ;
long long int arr_55 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)37746;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)27194 : (unsigned short)49776;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)61382;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3706634880839144621ULL : 16599859312345737960ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)14712;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 6403275111778499801ULL : 16237587100931909634ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1192318248;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -739123289;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)8832 : (unsigned short)23282;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = -1873156506;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_54 [i_0] = -1125563166;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_55 [i_0] [i_1] = 2523010051057271022LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_55 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
