#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1459997217U;
signed char var_1 = (signed char)-47;
unsigned int var_2 = 2615360563U;
signed char var_3 = (signed char)-28;
signed char var_4 = (signed char)80;
unsigned int var_5 = 2885089297U;
long long int var_6 = 688074100429389176LL;
unsigned long long int var_7 = 3769273948015755027ULL;
short var_8 = (short)-7608;
signed char var_9 = (signed char)-5;
unsigned int var_10 = 3760480099U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1053289799U;
int var_13 = 112342788;
unsigned int var_14 = 1747268462U;
unsigned char var_15 = (unsigned char)75;
unsigned short var_16 = (unsigned short)34547;
signed char var_17 = (signed char)-62;
int zero = 0;
unsigned int var_18 = 2297570988U;
unsigned short var_19 = (unsigned short)41023;
signed char var_20 = (signed char)82;
signed char var_21 = (signed char)40;
long long int var_22 = 4421778700690253657LL;
signed char var_23 = (signed char)121;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 6145255595655119399ULL;
unsigned long long int var_26 = 12602236217510188509ULL;
signed char var_27 = (signed char)102;
unsigned int var_28 = 4000387679U;
short var_29 = (short)-6655;
signed char var_30 = (signed char)-67;
_Bool var_31 = (_Bool)0;
signed char arr_5 [24] [24] ;
short arr_6 [24] ;
unsigned int arr_18 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)-20509;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 927827735U;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
