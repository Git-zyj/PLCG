#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2273678484649270308LL;
int zero = 0;
unsigned short var_20 = (unsigned short)33372;
unsigned long long int var_21 = 8769516606256165379ULL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)49;
unsigned char var_24 = (unsigned char)132;
unsigned short var_25 = (unsigned short)63506;
unsigned char var_26 = (unsigned char)16;
unsigned int var_27 = 365802868U;
unsigned long long int var_28 = 2712976834819633530ULL;
unsigned int var_29 = 103004155U;
unsigned short var_30 = (unsigned short)29085;
signed char var_31 = (signed char)-46;
unsigned long long int var_32 = 3193362779830912264ULL;
unsigned long long int var_33 = 7195276906820745953ULL;
unsigned long long int var_34 = 8601294046356178457ULL;
_Bool var_35 = (_Bool)1;
unsigned long long int var_36 = 16863971015498452289ULL;
_Bool var_37 = (_Bool)1;
unsigned char var_38 = (unsigned char)129;
unsigned int var_39 = 121933209U;
unsigned long long int var_40 = 15843055760391742241ULL;
_Bool var_41 = (_Bool)0;
_Bool var_42 = (_Bool)1;
signed char var_43 = (signed char)-48;
unsigned long long int var_44 = 15950402227490131115ULL;
unsigned short var_45 = (unsigned short)30944;
_Bool var_46 = (_Bool)0;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_1 [10] [10] ;
unsigned char arr_4 [10] ;
unsigned short arr_5 [10] ;
unsigned short arr_13 [10] [10] [10] [10] ;
unsigned long long int arr_16 [10] [10] ;
unsigned int arr_22 [13] ;
_Bool arr_23 [13] ;
signed char arr_25 [13] [13] [13] ;
unsigned long long int arr_26 [13] [13] ;
unsigned char arr_28 [13] [13] [13] ;
unsigned long long int arr_30 [13] ;
unsigned long long int arr_34 [13] [13] [13] ;
unsigned char arr_37 [13] ;
unsigned long long int arr_44 [23] ;
unsigned char arr_45 [23] [23] ;
signed char arr_9 [10] [10] ;
unsigned short arr_21 [10] [10] ;
signed char arr_32 [13] [13] [13] ;
unsigned long long int arr_39 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 17410624311807476478ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 7381589507124172027ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)39018;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)15194 : (unsigned short)49683;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = 14988358321885197149ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = 1902078697U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_26 [i_0] [i_1] = 14075943950188861638ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_30 [i_0] = 3647087485706335348ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 18091768226987768515ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_37 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_44 [i_0] = 13479452873706629544ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_45 [i_0] [i_1] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)4393 : (unsigned short)12767;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_39 [i_0] = 9386222684758654628ULL;
}

void checksum() {
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
