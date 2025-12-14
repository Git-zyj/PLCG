#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6096306978411711360LL;
long long int var_2 = -4216607741734155905LL;
_Bool var_3 = (_Bool)0;
int var_4 = 1272107385;
long long int var_5 = 1778436101680586674LL;
long long int var_6 = 814205874447954909LL;
unsigned long long int var_7 = 16945533743180229779ULL;
int var_8 = -423500126;
long long int var_13 = -3106454392434050375LL;
int var_14 = 900775339;
long long int var_15 = 4811488402217176679LL;
int var_16 = 1672008430;
int zero = 0;
unsigned long long int var_17 = 892550825285152120ULL;
unsigned short var_18 = (unsigned short)29798;
unsigned long long int var_19 = 8541871793106075743ULL;
int var_20 = 109701372;
int var_21 = -290683049;
int var_22 = -467622534;
long long int var_23 = -5394674286850322402LL;
int arr_1 [16] ;
int arr_2 [16] ;
long long int arr_4 [16] ;
unsigned long long int arr_6 [19] ;
long long int arr_7 [19] ;
_Bool arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -339529786;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -605790186;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -1323059704015996005LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 250625807612560088ULL : 14044193749300880527ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 5043076481239596984LL : -6360436922729447051LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
