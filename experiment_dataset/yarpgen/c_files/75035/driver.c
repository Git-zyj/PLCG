#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 772109722U;
short var_2 = (short)-15882;
long long int var_4 = 7189829727020615020LL;
unsigned int var_5 = 2773164189U;
unsigned int var_9 = 11226543U;
short var_10 = (short)22059;
unsigned short var_11 = (unsigned short)25334;
int zero = 0;
unsigned short var_15 = (unsigned short)17566;
_Bool var_16 = (_Bool)1;
long long int var_17 = -6702296649099854817LL;
unsigned long long int var_18 = 16575420575925297486ULL;
unsigned int var_19 = 853444477U;
short var_20 = (short)-10886;
unsigned int var_21 = 1296244000U;
unsigned long long int var_22 = 4200507520636459475ULL;
unsigned short var_23 = (unsigned short)44226;
signed char arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned short arr_4 [22] [22] [22] ;
short arr_7 [22] [22] [22] [22] ;
short arr_12 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2299204062U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)37179 : (unsigned short)10592;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)786;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-15194 : (short)9563;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
