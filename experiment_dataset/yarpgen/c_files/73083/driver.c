#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1977658991U;
signed char var_2 = (signed char)-42;
unsigned long long int var_3 = 5090054430296137534ULL;
short var_4 = (short)15801;
long long int var_5 = -5435568588997299912LL;
int var_7 = -1967219901;
long long int var_8 = -32461133599996576LL;
unsigned short var_10 = (unsigned short)26909;
int zero = 0;
int var_13 = 125886737;
unsigned char var_14 = (unsigned char)170;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)7883;
long long int var_18 = -3932668370340747356LL;
unsigned int var_19 = 1042731511U;
signed char var_20 = (signed char)-78;
unsigned int var_21 = 3825393133U;
long long int var_22 = -1844237206982939831LL;
short var_23 = (short)-8487;
unsigned int var_24 = 3404978344U;
int var_25 = -2050560052;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)2737;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 2455821576938653105ULL;
long long int var_30 = 5169005549432454142LL;
unsigned short arr_0 [13] ;
unsigned long long int arr_4 [13] [13] [13] ;
long long int arr_5 [13] [13] [13] ;
signed char arr_6 [13] [13] [13] [13] [13] [13] ;
short arr_8 [13] [13] [13] [13] [13] [13] ;
long long int arr_9 [13] [13] [13] [13] [13] [13] [13] ;
signed char arr_11 [13] ;
int arr_19 [16] ;
_Bool arr_20 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18271 : (unsigned short)38945;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2639157739742494758ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3437486285069182139LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (signed char)-27 : (signed char)-41;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-1551;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? -7159364086542787401LL : 2237348630673647117LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = -156270383;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (_Bool)0;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
