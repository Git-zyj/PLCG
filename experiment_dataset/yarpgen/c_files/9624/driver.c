#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22276;
_Bool var_2 = (_Bool)1;
long long int var_3 = 2431804575302708519LL;
int var_4 = -488395371;
short var_5 = (short)-31452;
short var_7 = (short)-23116;
_Bool var_8 = (_Bool)0;
long long int var_9 = 6381311841797627098LL;
unsigned short var_10 = (unsigned short)20735;
unsigned long long int var_11 = 16738662885271081415ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)92;
long long int var_14 = -4662309014992537290LL;
unsigned long long int var_15 = 10320346856317202232ULL;
unsigned short var_16 = (unsigned short)29013;
long long int var_17 = 2117057635293724705LL;
signed char var_18 = (signed char)-91;
unsigned long long int var_19 = 15390436096104006041ULL;
int zero = 0;
signed char var_20 = (signed char)-89;
short var_21 = (short)-22238;
signed char var_22 = (signed char)96;
unsigned short var_23 = (unsigned short)51193;
unsigned long long int var_24 = 4026303967534522038ULL;
unsigned long long int var_25 = 6196190895810680949ULL;
signed char arr_8 [20] [20] [20] [20] ;
unsigned int arr_15 [18] [18] ;
short arr_16 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-93 : (signed char)-37;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 2711389737U : 3965313889U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-26470 : (short)-12308;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
