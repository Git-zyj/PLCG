#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2215746010U;
unsigned int var_1 = 1531763081U;
int var_2 = 963064474;
unsigned int var_3 = 840671454U;
long long int var_4 = 7686092561033714614LL;
int var_5 = 326033146;
unsigned short var_6 = (unsigned short)29813;
unsigned char var_7 = (unsigned char)91;
unsigned int var_8 = 3558782567U;
unsigned short var_9 = (unsigned short)791;
int zero = 0;
unsigned int var_11 = 1427733890U;
unsigned int var_12 = 1444296531U;
short var_13 = (short)18926;
int var_14 = 350633645;
short var_15 = (short)32017;
unsigned short var_16 = (unsigned short)55673;
int var_17 = -163659550;
int var_18 = 909066742;
unsigned short var_19 = (unsigned short)9805;
unsigned int var_20 = 603987943U;
signed char var_21 = (signed char)-37;
unsigned short var_22 = (unsigned short)58367;
short var_23 = (short)-594;
unsigned short var_24 = (unsigned short)29492;
unsigned short var_25 = (unsigned short)59994;
short var_26 = (short)23484;
int var_27 = 1755817434;
unsigned int var_28 = 1502413780U;
unsigned int var_29 = 303384992U;
unsigned char var_30 = (unsigned char)24;
short var_31 = (short)31047;
unsigned short var_32 = (unsigned short)53747;
short var_33 = (short)13686;
unsigned long long int var_34 = 15434661564911641353ULL;
signed char var_35 = (signed char)53;
long long int var_36 = -4168590717224156848LL;
unsigned char var_37 = (unsigned char)200;
int var_38 = 209301809;
unsigned int var_39 = 1552011077U;
_Bool var_40 = (_Bool)1;
unsigned int var_41 = 1862979813U;
unsigned short var_42 = (unsigned short)45204;
int arr_0 [10] ;
long long int arr_2 [10] ;
_Bool arr_6 [10] [10] [10] ;
unsigned int arr_11 [10] [10] [10] [10] [10] [10] ;
_Bool arr_13 [23] ;
int arr_14 [23] ;
unsigned long long int arr_15 [23] [23] ;
signed char arr_16 [23] [23] [23] ;
_Bool arr_17 [23] [23] ;
unsigned short arr_18 [23] ;
signed char arr_19 [23] [23] [23] ;
unsigned char arr_20 [23] [23] ;
unsigned long long int arr_21 [23] ;
unsigned int arr_24 [23] [23] ;
unsigned long long int arr_28 [23] [23] [23] [23] ;
long long int arr_29 [23] [23] [23] ;
unsigned long long int arr_30 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -8618766;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 6562549349455118881LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 2802853132U : 1399827827U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 204489668 : -710708190;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 7979834697662801139ULL : 1824202665105280212ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19201 : (unsigned short)61125;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)39 : (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 4902439395075852790ULL : 17076807372282342670ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? 3538243538U : 181393580U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 8930479422705191762ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 941666825883759765LL : -7840332490922349797LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_30 [i_0] [i_1] = (i_0 % 2 == 0) ? 3793457665643991467ULL : 1124496094854083924ULL;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
