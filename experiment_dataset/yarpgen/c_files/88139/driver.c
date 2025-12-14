#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 49019438785812621LL;
long long int var_1 = 699811670859351603LL;
signed char var_2 = (signed char)-71;
int var_3 = -1423694725;
int var_4 = 608011064;
long long int var_5 = 735844534158727631LL;
unsigned long long int var_6 = 1763920414154855141ULL;
_Bool var_7 = (_Bool)1;
int var_8 = 1863693603;
short var_9 = (short)-6131;
signed char var_11 = (signed char)78;
unsigned int var_12 = 1615610599U;
int zero = 0;
short var_13 = (short)-16368;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)18;
short var_16 = (short)-7614;
_Bool var_17 = (_Bool)0;
int var_18 = 1333933689;
long long int var_19 = 3848192371601535393LL;
unsigned long long int var_20 = 16172419606344241374ULL;
long long int var_21 = -2838368892712660925LL;
signed char var_22 = (signed char)76;
int var_23 = 370758971;
unsigned long long int var_24 = 7135824627391478113ULL;
long long int var_25 = -5146040291902792395LL;
long long int var_26 = -8113779348219760048LL;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)22;
unsigned long long int var_30 = 15538441804564278172ULL;
long long int var_31 = -3384458567155899219LL;
int arr_0 [15] ;
unsigned short arr_2 [15] ;
short arr_5 [15] [15] [15] ;
long long int arr_11 [23] ;
unsigned char arr_15 [23] [23] [23] ;
long long int arr_16 [23] [23] [23] ;
long long int arr_18 [23] [23] ;
unsigned short arr_23 [21] ;
signed char arr_25 [25] ;
long long int arr_9 [15] [15] [15] ;
signed char arr_10 [15] ;
unsigned char arr_13 [23] ;
long long int arr_20 [23] [23] [23] [23] ;
short arr_27 [25] [25] ;
unsigned long long int arr_28 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -1098046333;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)30142;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)20458;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = -3847767612849407987LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -81222039053725223LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = -2675372415578682800LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (unsigned short)38353;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 6047517606191749758LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -1712397788530559903LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_27 [i_0] [i_1] = (short)-12829;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_28 [i_0] [i_1] = 12392739501147366594ULL;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
