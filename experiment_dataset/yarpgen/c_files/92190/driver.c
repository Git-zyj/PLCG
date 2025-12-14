#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13991808465675926778ULL;
unsigned int var_1 = 173681383U;
unsigned short var_2 = (unsigned short)25607;
int var_8 = -18355004;
int var_9 = -1538963890;
unsigned int var_13 = 356211211U;
unsigned int var_15 = 3165001645U;
unsigned int var_17 = 1685373772U;
int zero = 0;
unsigned int var_18 = 3108890824U;
unsigned short var_19 = (unsigned short)24704;
unsigned long long int var_20 = 186894544490035189ULL;
signed char var_21 = (signed char)44;
unsigned long long int var_22 = 6625604923925841231ULL;
long long int var_23 = -4533511438481413635LL;
_Bool var_24 = (_Bool)0;
long long int var_25 = -6392091930357343733LL;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 9819703959106722846ULL;
unsigned short arr_0 [19] [19] ;
unsigned long long int arr_1 [19] ;
unsigned char arr_3 [19] [19] [19] ;
_Bool arr_4 [19] [19] [19] ;
short arr_8 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)26988;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 6423768837335396985ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)11212;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
