#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29441;
unsigned long long int var_1 = 6550997532947800973ULL;
signed char var_2 = (signed char)104;
int var_4 = 1301656699;
unsigned int var_5 = 3652556595U;
unsigned short var_6 = (unsigned short)17018;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)14586;
unsigned int var_9 = 2935166428U;
short var_10 = (short)3502;
long long int var_11 = -7745849714647463732LL;
unsigned int var_12 = 902664566U;
signed char var_13 = (signed char)-124;
unsigned long long int var_15 = 5518636095078494501ULL;
int zero = 0;
unsigned int var_16 = 3196111228U;
unsigned int var_17 = 4264339536U;
unsigned short var_18 = (unsigned short)8070;
unsigned short var_19 = (unsigned short)23397;
unsigned int var_20 = 3542956566U;
_Bool var_21 = (_Bool)1;
long long int var_22 = 4904936167238818559LL;
short var_23 = (short)23908;
int var_24 = 417682089;
unsigned long long int var_25 = 333786602802032100ULL;
unsigned long long int var_26 = 80159942669846983ULL;
long long int var_27 = 5328801543143942804LL;
unsigned long long int arr_8 [22] ;
long long int arr_17 [22] [22] [22] [22] ;
unsigned char arr_24 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 7593680681071241408ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 6491359978057614282LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)135 : (unsigned char)16;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
