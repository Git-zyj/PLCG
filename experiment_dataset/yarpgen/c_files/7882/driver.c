#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31341;
unsigned int var_1 = 135404539U;
unsigned int var_2 = 1000012764U;
unsigned long long int var_5 = 10978022469758586448ULL;
short var_6 = (short)-23944;
unsigned long long int var_7 = 12840650744315305235ULL;
unsigned int var_8 = 1031448923U;
unsigned long long int var_9 = 5946248196657852361ULL;
unsigned short var_10 = (unsigned short)46681;
int zero = 0;
unsigned long long int var_14 = 4930468293046013625ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)58489;
unsigned int var_17 = 3468030318U;
short var_18 = (short)-5892;
unsigned long long int var_19 = 6762060418806670839ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 2803204830840431446ULL;
long long int var_23 = 8529659400817964838LL;
unsigned long long int var_24 = 9233074202644386895ULL;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 16479269279542613621ULL;
unsigned short var_27 = (unsigned short)15136;
_Bool var_28 = (_Bool)1;
unsigned short arr_0 [14] ;
unsigned short arr_1 [14] ;
short arr_3 [14] [14] ;
unsigned char arr_4 [14] ;
unsigned int arr_10 [14] ;
_Bool arr_15 [14] ;
unsigned long long int arr_18 [14] [14] ;
signed char arr_5 [14] ;
int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)26102;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)1866;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-27124;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 3906561930U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 17918409775921946479ULL : 6950943770272180695ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = -1810559736;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
