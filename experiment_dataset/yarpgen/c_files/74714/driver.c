#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-36;
unsigned int var_2 = 1614331611U;
short var_5 = (short)-28455;
unsigned short var_7 = (unsigned short)23307;
_Bool var_9 = (_Bool)0;
int var_11 = -1148760098;
int zero = 0;
short var_12 = (short)19393;
int var_13 = -1147616763;
int var_14 = 940593612;
int var_15 = 1603682678;
signed char var_16 = (signed char)-39;
unsigned long long int var_17 = 16965452995974097560ULL;
unsigned int var_18 = 2617948775U;
unsigned long long int var_19 = 15831694872370527636ULL;
short var_20 = (short)-21209;
signed char var_21 = (signed char)-12;
signed char var_22 = (signed char)88;
unsigned char var_23 = (unsigned char)214;
signed char var_24 = (signed char)-119;
short var_25 = (short)-16684;
long long int var_26 = 2834104986611201323LL;
int var_27 = 665870850;
unsigned int arr_2 [12] ;
signed char arr_3 [12] ;
int arr_6 [12] [12] ;
_Bool arr_13 [14] ;
unsigned short arr_14 [14] ;
signed char arr_8 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3966990130U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -1146979714 : 518364202;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (unsigned short)59157;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)123 : (signed char)6;
}

void checksum() {
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
