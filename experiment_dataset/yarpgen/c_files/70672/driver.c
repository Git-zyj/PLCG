#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)22;
int var_3 = 1014239416;
unsigned int var_4 = 2446845537U;
signed char var_6 = (signed char)-2;
unsigned long long int var_7 = 14443586219106853151ULL;
int var_8 = 372732255;
int var_9 = 1924996977;
signed char var_11 = (signed char)-72;
long long int var_12 = -2645120977214157985LL;
signed char var_14 = (signed char)86;
int zero = 0;
unsigned char var_16 = (unsigned char)160;
unsigned char var_17 = (unsigned char)133;
unsigned long long int var_18 = 9764275156553731966ULL;
unsigned long long int var_19 = 8327649857296337452ULL;
unsigned int var_20 = 2766826658U;
signed char var_21 = (signed char)29;
long long int var_22 = -8344379292093899322LL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 6842813175444768623ULL;
long long int var_25 = 6663833618897677844LL;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 11659603932862121988ULL;
long long int var_28 = -4301316092143532553LL;
unsigned char var_29 = (unsigned char)206;
int var_30 = -328892813;
unsigned int var_31 = 3313261285U;
unsigned short var_32 = (unsigned short)26046;
long long int var_33 = -1000189100818537715LL;
long long int var_34 = 8012940310587267467LL;
long long int var_35 = -3207307666718768843LL;
signed char var_36 = (signed char)30;
short var_37 = (short)12383;
unsigned short var_38 = (unsigned short)22675;
int arr_0 [24] ;
_Bool arr_1 [24] [24] ;
long long int arr_3 [24] ;
long long int arr_6 [18] ;
unsigned short arr_10 [17] ;
unsigned short arr_15 [10] [10] ;
int arr_19 [10] [10] [10] [10] ;
unsigned char arr_20 [10] [10] [10] [10] ;
unsigned char arr_25 [10] ;
long long int arr_26 [10] [10] [10] ;
unsigned short arr_27 [10] [10] ;
long long int arr_28 [10] [10] [10] [10] ;
unsigned char arr_30 [10] [10] ;
short arr_8 [18] [18] ;
unsigned char arr_22 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1569515101;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1029623089064541392LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 8965632726542044583LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned short)53571;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)29554;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1929459481 : 1104211932;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = -6866224746363261561LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)32745 : (unsigned short)59352;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -6538783243078764440LL : 4486288986014311284LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)31248 : (short)-2218;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)139 : (unsigned char)234;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
