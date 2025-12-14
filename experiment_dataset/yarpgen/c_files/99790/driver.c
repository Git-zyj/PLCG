#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1211124923;
signed char var_2 = (signed char)-95;
signed char var_3 = (signed char)-62;
signed char var_5 = (signed char)-21;
unsigned short var_6 = (unsigned short)2751;
signed char var_9 = (signed char)117;
_Bool var_10 = (_Bool)1;
long long int var_12 = 6195140919432297259LL;
unsigned int var_13 = 2002198294U;
signed char var_14 = (signed char)-26;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)49749;
unsigned char var_19 = (unsigned char)238;
int zero = 0;
unsigned short var_20 = (unsigned short)18521;
unsigned short var_21 = (unsigned short)58367;
short var_22 = (short)5313;
long long int var_23 = 1066134601685477018LL;
_Bool arr_0 [17] ;
unsigned long long int arr_1 [17] ;
short arr_2 [17] ;
signed char arr_3 [17] [17] ;
unsigned long long int arr_4 [17] ;
_Bool arr_5 [17] ;
unsigned short arr_6 [17] [17] [17] [17] ;
unsigned long long int arr_7 [17] [17] [17] ;
unsigned short arr_9 [17] [17] ;
short arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1767306191378693030ULL : 18409228502504395ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-27112 : (short)22645;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 17681276889072553733ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)8987;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 15744204915132463710ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)53426 : (unsigned short)7291;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-19925 : (short)32172;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
