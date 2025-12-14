#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2231419229U;
unsigned long long int var_1 = 2020439772130070667ULL;
signed char var_2 = (signed char)-21;
unsigned long long int var_3 = 6546749898022028198ULL;
unsigned short var_4 = (unsigned short)3455;
unsigned long long int var_5 = 7429996354015715097ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 6089469158820736828ULL;
signed char var_8 = (signed char)103;
unsigned long long int var_9 = 9852047018146901238ULL;
unsigned long long int var_10 = 10660693115461854603ULL;
unsigned char var_11 = (unsigned char)169;
int var_12 = -165133264;
unsigned long long int var_13 = 17369252954282668625ULL;
unsigned char var_14 = (unsigned char)103;
unsigned char var_15 = (unsigned char)121;
unsigned char var_16 = (unsigned char)15;
int var_17 = 1084891214;
int zero = 0;
unsigned long long int var_18 = 9016269522876973423ULL;
signed char var_19 = (signed char)117;
int var_20 = -1790066618;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)10529;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)29;
signed char var_25 = (signed char)98;
int var_26 = -131711892;
unsigned char var_27 = (unsigned char)206;
short var_28 = (short)-17434;
long long int var_29 = 1346639658197288016LL;
unsigned long long int var_30 = 10554033059953099997ULL;
unsigned short var_31 = (unsigned short)15947;
unsigned int var_32 = 779769591U;
_Bool var_33 = (_Bool)0;
long long int var_34 = 3016721921558893991LL;
long long int arr_2 [18] ;
long long int arr_7 [18] ;
unsigned short arr_11 [18] ;
unsigned long long int arr_24 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -4476175106056760635LL : 479556254547212274LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 9126925293179719970LL : -3625323279752532401LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57320 : (unsigned short)57376;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1111063006468787873ULL : 2159056017869284173ULL;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
