#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
int var_1 = 440944527;
unsigned short var_2 = (unsigned short)20937;
_Bool var_3 = (_Bool)1;
short var_4 = (short)28906;
int var_5 = 78207612;
unsigned long long int var_6 = 15548448252365752103ULL;
short var_7 = (short)17524;
_Bool var_8 = (_Bool)1;
short var_9 = (short)27116;
unsigned char var_10 = (unsigned char)104;
unsigned short var_11 = (unsigned short)9072;
short var_14 = (short)24097;
signed char var_15 = (signed char)-89;
int zero = 0;
unsigned int var_16 = 1435460326U;
signed char var_17 = (signed char)74;
unsigned long long int var_18 = 17104206421423763196ULL;
short var_19 = (short)25396;
unsigned long long int var_20 = 11803789576025697524ULL;
unsigned int var_21 = 4263175798U;
unsigned int var_22 = 4014289506U;
unsigned char arr_5 [20] [20] ;
unsigned short arr_6 [20] ;
_Bool arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)51908;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
