#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8099959093614127981ULL;
int var_1 = 791123650;
unsigned int var_2 = 3029155534U;
long long int var_3 = 6902837037986081245LL;
unsigned int var_4 = 2840955201U;
signed char var_5 = (signed char)53;
unsigned long long int var_6 = 13729539850525742607ULL;
unsigned int var_8 = 3079415263U;
int zero = 0;
int var_10 = 2065254420;
unsigned long long int var_11 = 2840538482493443936ULL;
unsigned long long int var_12 = 11823977131613892012ULL;
signed char var_13 = (signed char)-88;
signed char var_14 = (signed char)-87;
unsigned long long int var_15 = 4193101487538226303ULL;
signed char var_16 = (signed char)91;
int var_17 = -1967802348;
signed char var_18 = (signed char)115;
int var_19 = 1622089749;
unsigned long long int var_20 = 8244469458828315634ULL;
unsigned short var_21 = (unsigned short)60957;
int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
long long int arr_5 [21] ;
int arr_6 [21] [21] [21] [21] ;
signed char arr_7 [21] [21] [21] ;
unsigned int arr_8 [21] [21] [21] ;
int arr_11 [21] [21] [21] [21] ;
unsigned long long int arr_12 [21] [21] [21] [21] [21] ;
unsigned short arr_13 [21] [21] [21] [21] [21] ;
signed char arr_14 [21] [21] [21] [21] [21] [21] [21] ;
unsigned int arr_16 [21] ;
long long int arr_30 [25] ;
signed char arr_32 [25] [25] ;
signed char arr_15 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_18 [21] [21] [21] [21] ;
unsigned long long int arr_21 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_27 [21] ;
unsigned int arr_28 [21] [21] [21] [21] [21] [21] [21] ;
long long int arr_35 [25] [25] ;
unsigned short arr_40 [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -551879219;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 18061069287246569138ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 756752100168655435LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2024798158;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 4049037494U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -2028317261;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 17690905563479895314ULL : 4522121098251982642ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)11714;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 2948272392U : 2220210420U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = -8769789784043413260LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_32 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (signed char)93 : (signed char)-1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)13 : (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 12065730994746844901ULL : 17721253151644753757ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 3421637426U : 283534885U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 3826823727U : 87099725U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_35 [i_0] [i_1] = 4350770992971675810LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)4133 : (unsigned short)5757;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
