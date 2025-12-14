#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1881539117;
short var_2 = (short)-20857;
int var_3 = -2126581539;
unsigned long long int var_4 = 18223802232110706081ULL;
long long int var_5 = -1947657880328704362LL;
unsigned int var_6 = 3583601767U;
int var_7 = 500267803;
unsigned char var_8 = (unsigned char)165;
short var_10 = (short)25383;
int zero = 0;
unsigned long long int var_11 = 10576962254792033961ULL;
unsigned long long int var_12 = 8619814571720617187ULL;
unsigned char var_13 = (unsigned char)146;
short var_14 = (short)-22221;
int var_15 = -1476055340;
short var_16 = (short)-3977;
short var_17 = (short)-12675;
unsigned long long int var_18 = 11015079273510480196ULL;
int var_19 = 1730473871;
short var_20 = (short)12836;
unsigned char var_21 = (unsigned char)121;
int var_22 = -310577893;
short var_23 = (short)-403;
int var_24 = 1159807339;
long long int var_25 = 4569298652542858931LL;
short arr_1 [11] ;
short arr_5 [11] [11] [11] ;
long long int arr_7 [11] ;
unsigned int arr_10 [11] [11] ;
unsigned long long int arr_13 [14] ;
long long int arr_16 [16] ;
unsigned long long int arr_17 [16] [16] ;
short arr_22 [20] ;
unsigned int arr_24 [20] [20] ;
long long int arr_28 [20] [20] [20] ;
unsigned long long int arr_29 [20] [20] [20] ;
int arr_30 [20] [20] [20] [20] ;
unsigned long long int arr_32 [20] ;
unsigned char arr_15 [14] [14] ;
long long int arr_18 [16] ;
long long int arr_19 [16] [16] ;
int arr_20 [16] ;
long long int arr_34 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)25879;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)8929;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 7490532739587469782LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 3228387322U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 15257258523911020714ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = -6636640479568489530LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = 13324147350678578636ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (short)16608;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = 3463308030U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2784087656443129139LL : 2314654570209736134LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 10927851317411426880ULL : 3233682078353722451ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 1589602718;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 17636769724210867044ULL : 5830875247184464502ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = 5032314979451297082LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = 6136212563780377479LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = -77529110;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8196725653658680713LL : 3640998102772849958LL;
}

void checksum() {
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
