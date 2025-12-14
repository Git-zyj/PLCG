#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2641350346603741209ULL;
short var_1 = (short)14489;
unsigned char var_2 = (unsigned char)199;
long long int var_4 = -6570312121287371828LL;
unsigned short var_5 = (unsigned short)65187;
short var_7 = (short)-32108;
short var_8 = (short)29017;
unsigned short var_9 = (unsigned short)5574;
long long int var_10 = -4425988809812973593LL;
short var_11 = (short)-8062;
int var_12 = -192775771;
long long int var_13 = -5335894682613702685LL;
int zero = 0;
long long int var_15 = 8222738009604358379LL;
unsigned int var_16 = 298206953U;
unsigned char var_17 = (unsigned char)114;
long long int var_18 = 4324616617904766849LL;
unsigned long long int var_19 = 12599747922348030253ULL;
unsigned short var_20 = (unsigned short)32593;
unsigned int var_21 = 974987520U;
unsigned char var_22 = (unsigned char)107;
long long int var_23 = -9153479661465212801LL;
unsigned int var_24 = 2519447761U;
unsigned short var_25 = (unsigned short)10507;
_Bool var_26 = (_Bool)1;
long long int var_27 = -2154385817201918227LL;
short var_28 = (short)-13739;
unsigned short var_29 = (unsigned short)5592;
signed char var_30 = (signed char)92;
unsigned char var_31 = (unsigned char)201;
short var_32 = (short)16327;
unsigned short var_33 = (unsigned short)29247;
unsigned int var_34 = 1116034118U;
unsigned long long int arr_0 [25] ;
unsigned int arr_1 [25] [25] ;
unsigned char arr_2 [25] [25] ;
long long int arr_4 [25] [25] ;
unsigned long long int arr_5 [17] ;
unsigned int arr_9 [17] [17] ;
unsigned int arr_10 [17] ;
signed char arr_12 [17] [17] [17] [17] ;
signed char arr_13 [17] ;
_Bool arr_16 [17] [17] [17] [17] [17] ;
long long int arr_23 [17] ;
unsigned int arr_24 [17] [17] [17] ;
unsigned long long int arr_34 [17] [17] [17] [17] [17] ;
unsigned int arr_36 [17] [17] [17] ;
unsigned int arr_41 [17] [17] [17] [17] ;
long long int arr_42 [17] [17] [17] [17] [17] ;
signed char arr_44 [17] [17] [17] [17] [17] ;
unsigned int arr_20 [17] ;
signed char arr_21 [17] ;
unsigned short arr_25 [17] [17] [17] ;
unsigned int arr_26 [17] [17] ;
unsigned char arr_27 [17] ;
unsigned char arr_31 [17] ;
unsigned short arr_46 [17] ;
long long int arr_47 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 10869684624151302082ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 4045783528U : 2340064181U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -4323358428333509678LL : 2544720210567025806LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 9235785193834939497ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 280649407U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 3489337823U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 860536302262576888LL : -8130526576852529181LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 3723171575U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 16509554266430236477ULL : 763923262359655196ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 2788419211U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = 2397964188U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = -1873410604412615171LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-118 : (signed char)103;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = 3371796091U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)58466 : (unsigned short)33187;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? 1262010613U : 1454946431U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned char)18 : (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_31 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28175 : (unsigned short)64931;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_47 [i_0] [i_1] = (i_0 % 2 == 0) ? -341608655772826568LL : 3391329189919194794LL;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
