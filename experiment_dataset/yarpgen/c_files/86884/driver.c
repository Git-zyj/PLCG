#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11217;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)3134;
unsigned short var_3 = (unsigned short)38511;
signed char var_4 = (signed char)-117;
int var_5 = -1317291840;
unsigned long long int var_6 = 1925899354998047571ULL;
signed char var_7 = (signed char)-70;
int var_8 = 1873485506;
unsigned char var_9 = (unsigned char)137;
unsigned long long int var_10 = 7632854475226021320ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3493606371U;
int zero = 0;
unsigned long long int var_13 = 18269547496768777789ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2483659363270152620LL;
unsigned short var_16 = (unsigned short)16658;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)195;
int var_19 = -977250036;
signed char var_20 = (signed char)15;
signed char var_21 = (signed char)-91;
unsigned char var_22 = (unsigned char)37;
unsigned int arr_0 [14] [14] ;
unsigned short arr_1 [14] ;
unsigned int arr_2 [14] ;
short arr_3 [14] [14] ;
unsigned int arr_4 [14] [14] ;
unsigned long long int arr_5 [14] ;
unsigned char arr_8 [10] ;
unsigned long long int arr_9 [10] [10] ;
unsigned long long int arr_13 [23] ;
unsigned short arr_15 [17] ;
unsigned char arr_18 [21] [21] ;
long long int arr_20 [21] ;
unsigned char arr_6 [14] ;
unsigned int arr_7 [14] ;
unsigned int arr_10 [10] [10] ;
unsigned short arr_11 [10] ;
long long int arr_14 [23] ;
unsigned int arr_17 [17] ;
int arr_21 [21] ;
int arr_22 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 266254529U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14023 : (unsigned short)56208;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1814345685U : 1591598025U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-31375;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 2300695712U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 14882128021613439786ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 5120784537805132295ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 9991821169184507637ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (unsigned short)18334;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = -6383726954188558592LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)67 : (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3972240358U : 2447469589U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 1456841098U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned short)2802;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 6197383395691566921LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = 2412853741U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = -616391944;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = -1783194012;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
