#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 260754706;
unsigned int var_1 = 1848977540U;
unsigned char var_2 = (unsigned char)233;
short var_3 = (short)32148;
int var_4 = 131618244;
unsigned short var_5 = (unsigned short)715;
long long int var_6 = 7592750429070148820LL;
long long int var_9 = -3546096957053903857LL;
short var_11 = (short)-17999;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)141;
long long int var_14 = 7513759537250302042LL;
unsigned short var_15 = (unsigned short)37083;
short var_16 = (short)373;
unsigned int var_17 = 2415855480U;
unsigned char var_18 = (unsigned char)204;
unsigned char var_19 = (unsigned char)170;
unsigned long long int var_20 = 16217488269217561345ULL;
unsigned char var_21 = (unsigned char)172;
unsigned int var_22 = 3197807472U;
unsigned int var_23 = 3387282106U;
unsigned long long int var_24 = 16055458292464932518ULL;
unsigned short var_25 = (unsigned short)19223;
short arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
unsigned char arr_3 [10] ;
short arr_4 [10] ;
short arr_6 [10] ;
unsigned char arr_8 [10] [10] [10] [10] ;
unsigned int arr_10 [10] [10] [10] ;
unsigned int arr_11 [10] [10] [10] ;
unsigned char arr_26 [10] [10] ;
_Bool arr_2 [18] ;
_Bool arr_12 [10] [10] [10] [10] [10] ;
unsigned int arr_15 [10] [10] ;
signed char arr_16 [10] ;
unsigned int arr_32 [10] ;
unsigned char arr_33 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_37 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-1784;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 3747019504778461086ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)30 : (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-1211;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)18990;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)194 : (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3280299136U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1848102507U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 3932782113U : 990576584U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)29 : (signed char)104;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 1899648934U : 3774689369U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned char)246 : (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_37 [i_0] = (unsigned short)18956;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
