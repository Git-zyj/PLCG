#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
int var_1 = 137174423;
short var_2 = (short)-1234;
short var_3 = (short)-32657;
unsigned char var_5 = (unsigned char)35;
signed char var_7 = (signed char)51;
int var_8 = 1283293108;
unsigned short var_10 = (unsigned short)45955;
int zero = 0;
unsigned short var_14 = (unsigned short)11406;
int var_15 = 174124182;
unsigned char var_16 = (unsigned char)234;
int var_17 = 1152445993;
short var_18 = (short)5442;
unsigned short var_19 = (unsigned short)17212;
short var_20 = (short)-12982;
signed char var_21 = (signed char)-61;
signed char var_22 = (signed char)123;
int var_23 = -860171118;
long long int var_24 = -2560412297365164416LL;
int var_25 = -1506309148;
unsigned short var_26 = (unsigned short)29919;
unsigned char var_27 = (unsigned char)195;
long long int var_28 = -930315390639202029LL;
unsigned int var_29 = 495200972U;
unsigned long long int var_30 = 10853527223574885234ULL;
short arr_0 [15] ;
long long int arr_1 [15] ;
unsigned char arr_2 [15] [15] ;
long long int arr_3 [15] ;
int arr_5 [15] ;
unsigned char arr_6 [15] [15] ;
unsigned long long int arr_7 [15] ;
signed char arr_8 [15] [15] ;
short arr_10 [15] [15] [15] [15] ;
long long int arr_11 [15] ;
unsigned int arr_12 [15] [15] [15] [15] [15] ;
unsigned int arr_15 [15] [15] ;
short arr_16 [15] ;
unsigned char arr_26 [15] [15] [15] [15] ;
int arr_13 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)26526;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 7433703286488076665LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -7131411587978243024LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1279702707;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 17674487437116106342ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (short)-11567;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 4305522659924300015LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 398905326U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = 1137358060U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (short)-2156;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 1677241946;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
