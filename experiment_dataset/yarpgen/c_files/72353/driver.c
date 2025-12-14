#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
unsigned int var_1 = 552099776U;
signed char var_2 = (signed char)74;
signed char var_3 = (signed char)22;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 7908261690195580703ULL;
unsigned long long int var_7 = 10602654089610221573ULL;
unsigned long long int var_8 = 15877111401617662971ULL;
long long int var_9 = 3622937399817727701LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)40381;
long long int var_13 = 7181674469416940747LL;
signed char var_14 = (signed char)-124;
short var_15 = (short)-31683;
unsigned int var_16 = 1967272638U;
unsigned int var_17 = 781030076U;
unsigned char var_18 = (unsigned char)216;
unsigned short var_19 = (unsigned short)19058;
unsigned long long int var_20 = 15887542911756861402ULL;
_Bool var_21 = (_Bool)0;
_Bool arr_1 [11] ;
unsigned long long int arr_2 [11] ;
unsigned char arr_4 [11] [11] ;
long long int arr_7 [11] [11] [11] [11] ;
short arr_15 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 12966703661370849028ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 4331765973383024063LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)-21403;
}

void checksum() {
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
