#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
unsigned int var_1 = 3892585090U;
unsigned short var_7 = (unsigned short)28380;
short var_9 = (short)-21521;
unsigned long long int var_13 = 7330158571024302467ULL;
unsigned long long int var_14 = 5051354859335427049ULL;
unsigned long long int var_15 = 17743451024598761395ULL;
int var_16 = -1890372968;
int zero = 0;
unsigned long long int var_18 = 11150156660417469782ULL;
unsigned long long int var_19 = 7392850545061815529ULL;
unsigned long long int var_20 = 13414055435796822799ULL;
int var_21 = -1300507777;
short var_22 = (short)-20103;
unsigned long long int arr_0 [22] ;
unsigned long long int arr_2 [22] [22] ;
short arr_3 [22] ;
signed char arr_4 [13] ;
int arr_6 [13] ;
short arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 12924786657997982200ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 14208751828077378237ULL : 14617518127673211269ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)-1715;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -809994184;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-23683;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
