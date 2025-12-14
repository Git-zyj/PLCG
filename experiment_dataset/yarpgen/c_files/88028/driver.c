#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)94;
long long int var_2 = -8477433472331088405LL;
unsigned int var_3 = 1859458366U;
short var_5 = (short)-25567;
unsigned short var_6 = (unsigned short)40022;
int var_7 = 94944939;
unsigned int var_8 = 2588590018U;
unsigned int var_9 = 4149660651U;
int var_10 = 201156737;
short var_11 = (short)-30951;
long long int var_13 = 9050696613770069136LL;
int zero = 0;
long long int var_14 = 5766143374002731310LL;
unsigned int var_15 = 2825253173U;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)174;
unsigned int var_18 = 1205168505U;
unsigned int var_19 = 3069950864U;
long long int var_20 = 5559261637419748278LL;
long long int var_21 = -657508235913315867LL;
unsigned char var_22 = (unsigned char)132;
unsigned short var_23 = (unsigned short)1899;
short arr_0 [14] [14] ;
long long int arr_1 [14] ;
unsigned char arr_2 [14] ;
int arr_3 [14] [14] ;
int arr_5 [14] [14] [14] [14] ;
int arr_9 [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-8267;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 8811913806807607914LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = -1665204086;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -1903076836;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -524726091 : -1468345789;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
