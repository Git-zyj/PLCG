#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2537762518U;
unsigned long long int var_1 = 1592943378947928761ULL;
unsigned long long int var_2 = 12247814725656520547ULL;
int var_3 = 1098419531;
unsigned long long int var_4 = 5771066293008326826ULL;
long long int var_5 = 5315278920547983233LL;
unsigned char var_6 = (unsigned char)184;
unsigned char var_7 = (unsigned char)63;
unsigned long long int var_8 = 13501604382001757198ULL;
signed char var_9 = (signed char)-52;
signed char var_10 = (signed char)-58;
unsigned int var_11 = 551460959U;
unsigned int var_12 = 3637336017U;
unsigned int var_13 = 1014365798U;
signed char var_14 = (signed char)52;
signed char var_15 = (signed char)-47;
unsigned char var_16 = (unsigned char)138;
unsigned int var_17 = 519519418U;
int var_18 = 371817131;
unsigned char var_19 = (unsigned char)181;
int zero = 0;
unsigned int var_20 = 2346074608U;
unsigned long long int var_21 = 9910555902891126361ULL;
unsigned int var_22 = 1214355763U;
unsigned int var_23 = 1199454824U;
unsigned int var_24 = 1973251187U;
unsigned int var_25 = 145601773U;
unsigned long long int var_26 = 14838676402905273954ULL;
unsigned int var_27 = 661155030U;
signed char var_28 = (signed char)-17;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 1158340571U;
unsigned int var_32 = 3388206767U;
unsigned int var_33 = 3716046259U;
short var_34 = (short)21950;
unsigned int var_35 = 1671784523U;
unsigned int var_36 = 1897596234U;
unsigned char var_37 = (unsigned char)151;
unsigned char var_38 = (unsigned char)85;
unsigned long long int arr_0 [19] [19] ;
unsigned int arr_4 [20] ;
unsigned long long int arr_5 [20] ;
long long int arr_6 [20] [20] [20] ;
unsigned int arr_7 [20] [20] [20] ;
signed char arr_8 [20] [20] ;
signed char arr_10 [20] [20] [20] ;
unsigned char arr_13 [20] [20] ;
unsigned long long int arr_14 [20] [20] [20] ;
signed char arr_16 [20] [20] [20] ;
signed char arr_17 [20] [20] ;
unsigned long long int arr_9 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 10605341520469527410ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1846263157U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 18112479980648596397ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 17636243615323024LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 269870784U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 10869935478162887934ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 9055244939906349123ULL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
