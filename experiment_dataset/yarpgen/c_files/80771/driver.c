#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2736554783202880648LL;
unsigned long long int var_1 = 14696421171129851255ULL;
unsigned long long int var_6 = 10377897320716128338ULL;
unsigned short var_7 = (unsigned short)43151;
unsigned int var_10 = 2464458112U;
signed char var_11 = (signed char)102;
unsigned char var_12 = (unsigned char)189;
unsigned char var_14 = (unsigned char)238;
short var_15 = (short)-28446;
long long int var_18 = -2793170565116603101LL;
int zero = 0;
unsigned int var_19 = 2680424198U;
short var_20 = (short)11934;
unsigned long long int var_21 = 751325465309070329ULL;
signed char var_22 = (signed char)74;
signed char var_23 = (signed char)121;
signed char var_24 = (signed char)20;
short var_25 = (short)-28663;
unsigned int var_26 = 2178661010U;
unsigned char var_27 = (unsigned char)188;
short var_28 = (short)17470;
unsigned char var_29 = (unsigned char)166;
unsigned long long int var_30 = 17901680185670306433ULL;
unsigned long long int var_31 = 15047264325705224467ULL;
unsigned int var_32 = 949203098U;
long long int var_33 = 827927734115609301LL;
unsigned short var_34 = (unsigned short)63518;
unsigned short var_35 = (unsigned short)40477;
unsigned char var_36 = (unsigned char)164;
unsigned char var_37 = (unsigned char)41;
signed char var_38 = (signed char)11;
unsigned char arr_0 [14] ;
long long int arr_1 [14] ;
unsigned char arr_2 [14] ;
unsigned long long int arr_3 [14] ;
signed char arr_4 [14] [14] [14] ;
signed char arr_5 [14] ;
signed char arr_7 [14] [14] ;
long long int arr_8 [14] [14] [14] ;
unsigned long long int arr_9 [14] [14] [14] ;
signed char arr_11 [14] [14] [14] ;
signed char arr_15 [14] ;
unsigned short arr_16 [14] ;
signed char arr_18 [14] ;
unsigned short arr_19 [14] ;
signed char arr_21 [14] [14] ;
unsigned int arr_6 [14] [14] [14] ;
unsigned char arr_10 [14] [14] ;
short arr_14 [14] [14] ;
long long int arr_23 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -7574660446124168880LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 18090739378793752660ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 661096028609532634LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 18312170866298761347ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (unsigned short)30509;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (unsigned short)33819;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1482242184U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (short)31659;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_23 [i_0] [i_1] = 5069129383800852089LL;
}

void checksum() {
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
