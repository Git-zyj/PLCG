#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1788323258U;
signed char var_1 = (signed char)-42;
int var_2 = 2008216853;
signed char var_3 = (signed char)2;
unsigned int var_4 = 3468996509U;
short var_5 = (short)-8596;
short var_6 = (short)13199;
long long int var_8 = -9196822007679977646LL;
unsigned int var_9 = 80928219U;
unsigned char var_10 = (unsigned char)158;
long long int var_11 = 2036941363271197002LL;
unsigned short var_12 = (unsigned short)57662;
int var_13 = 781695149;
long long int var_16 = 957701857428970457LL;
int zero = 0;
unsigned char var_17 = (unsigned char)186;
long long int var_18 = 6349221395174445502LL;
signed char var_19 = (signed char)-72;
unsigned int var_20 = 682515097U;
int var_21 = -1941124914;
int var_22 = 333893045;
signed char var_23 = (signed char)4;
short var_24 = (short)-6910;
unsigned int var_25 = 1206929796U;
int var_26 = -425806277;
int var_27 = -526265138;
long long int var_28 = 4787546857736301278LL;
long long int var_29 = -3448994118367881281LL;
int var_30 = -977281605;
_Bool arr_0 [15] [15] ;
int arr_1 [15] ;
unsigned short arr_3 [15] ;
unsigned int arr_5 [15] ;
unsigned int arr_7 [15] [15] [15] ;
long long int arr_15 [17] ;
signed char arr_16 [17] ;
long long int arr_13 [15] ;
signed char arr_14 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1468927355;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)58496;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 2796329814U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3680479317U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = -294325290810965883LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)10 : (signed char)36;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = -5215849808421974402LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)-99;
}

void checksum() {
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
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
