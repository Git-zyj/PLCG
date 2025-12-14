#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38506;
signed char var_1 = (signed char)-84;
unsigned char var_2 = (unsigned char)144;
unsigned char var_3 = (unsigned char)175;
unsigned int var_4 = 2045400700U;
unsigned short var_5 = (unsigned short)7116;
unsigned short var_6 = (unsigned short)13602;
unsigned short var_7 = (unsigned short)21010;
unsigned int var_9 = 4037770424U;
signed char var_10 = (signed char)-58;
unsigned long long int var_11 = 4297515965618926952ULL;
signed char var_12 = (signed char)50;
signed char var_14 = (signed char)-72;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 8117170117119501067LL;
int var_17 = 1038090844;
signed char var_18 = (signed char)6;
long long int var_19 = -5177648986675176854LL;
long long int var_20 = 5998993819440944674LL;
short var_21 = (short)-23260;
signed char var_22 = (signed char)-46;
signed char var_23 = (signed char)95;
signed char var_24 = (signed char)-69;
short var_25 = (short)-22280;
long long int var_26 = 4056258593561498267LL;
unsigned char var_27 = (unsigned char)211;
signed char var_28 = (signed char)-102;
signed char var_29 = (signed char)-100;
unsigned long long int var_30 = 12344795146243471716ULL;
long long int var_31 = -1201373769525296666LL;
unsigned long long int var_32 = 6878404705412812528ULL;
unsigned long long int var_33 = 18114920271604516973ULL;
signed char var_34 = (signed char)97;
unsigned long long int var_35 = 7371326627677469220ULL;
signed char arr_0 [10] ;
signed char arr_1 [10] ;
unsigned long long int arr_3 [10] ;
unsigned short arr_6 [10] ;
unsigned short arr_7 [10] ;
short arr_8 [10] [10] [10] [10] ;
unsigned short arr_11 [10] [10] [10] [10] [10] ;
long long int arr_18 [17] ;
int arr_19 [17] [17] ;
short arr_14 [10] [10] [10] [10] [10] [10] [10] ;
unsigned short arr_15 [10] [10] [10] [10] [10] [10] [10] ;
short arr_16 [10] [10] [10] ;
unsigned long long int arr_17 [10] ;
int arr_27 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 13193925958640668640ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)14785;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)901;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)15872;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)25359;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = -1537797783610532181LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? -1543467733 : 1362725834;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)6577;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)21800;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)-15170;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = 3163784348677097992ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_27 [i_0] [i_1] = -508562804;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 10; ++i_6) 
                                hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
