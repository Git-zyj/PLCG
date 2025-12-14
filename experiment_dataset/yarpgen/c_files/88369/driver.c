#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)89;
long long int var_5 = -8019777149994773394LL;
unsigned int var_10 = 619259351U;
short var_17 = (short)-13081;
int zero = 0;
long long int var_20 = -4694666445448958024LL;
short var_21 = (short)-16152;
unsigned char var_22 = (unsigned char)227;
unsigned long long int var_23 = 11486130955220310637ULL;
unsigned long long int var_24 = 17072929868080060015ULL;
unsigned char var_25 = (unsigned char)127;
unsigned short var_26 = (unsigned short)22817;
long long int var_27 = 4726135103631330533LL;
long long int arr_0 [21] ;
long long int arr_1 [21] ;
long long int arr_4 [17] [17] ;
unsigned char arr_8 [20] ;
unsigned long long int arr_3 [21] ;
signed char arr_6 [17] ;
unsigned char arr_7 [17] ;
unsigned char arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -7423541402534243945LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -816224754822788974LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = -1823789998057976628LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7938371529069956165ULL : 2619489002524449042ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-105 : (signed char)105;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)130 : (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)78;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
