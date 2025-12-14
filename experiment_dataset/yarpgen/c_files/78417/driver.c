#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)134;
unsigned long long int var_5 = 2630303899717822821ULL;
unsigned short var_6 = (unsigned short)46080;
short var_7 = (short)-3657;
unsigned int var_8 = 3779665518U;
unsigned int var_9 = 2803121207U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 12571178181976664576ULL;
unsigned long long int var_13 = 8691835758702365546ULL;
unsigned int var_16 = 2919179667U;
unsigned char var_17 = (unsigned char)92;
int zero = 0;
unsigned int var_18 = 556524016U;
short var_19 = (short)-27604;
unsigned char var_20 = (unsigned char)253;
unsigned short var_21 = (unsigned short)30295;
unsigned short var_22 = (unsigned short)44760;
unsigned short var_23 = (unsigned short)46955;
unsigned long long int var_24 = 481981424199796446ULL;
unsigned int var_25 = 1121351510U;
unsigned int var_26 = 2441712327U;
unsigned int var_27 = 2767106038U;
unsigned char var_28 = (unsigned char)98;
unsigned long long int var_29 = 5423180490083360492ULL;
unsigned short var_30 = (unsigned short)62855;
signed char var_31 = (signed char)-107;
unsigned short var_32 = (unsigned short)42154;
unsigned int var_33 = 3789388889U;
long long int var_34 = -8515432713455081500LL;
int var_35 = 1013130340;
unsigned long long int arr_0 [25] [25] ;
int arr_1 [25] [25] ;
unsigned char arr_2 [25] [25] ;
unsigned int arr_3 [25] [25] ;
long long int arr_5 [10] [10] ;
short arr_6 [10] [10] ;
unsigned int arr_10 [22] ;
long long int arr_15 [22] ;
unsigned char arr_4 [25] [25] ;
unsigned long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 5748395674526414308ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -834274659;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3771849091U : 3251909068U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 8928496155736245839LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (short)20045;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 3558271284U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = -5981385019867220800LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)42 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 4861119465025314732ULL;
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
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
