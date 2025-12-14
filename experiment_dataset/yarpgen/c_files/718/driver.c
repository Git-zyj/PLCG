#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 750296675750908182LL;
unsigned int var_2 = 516189798U;
int var_3 = -570932137;
unsigned short var_4 = (unsigned short)30266;
unsigned char var_6 = (unsigned char)178;
unsigned short var_7 = (unsigned short)8368;
unsigned char var_9 = (unsigned char)192;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 1997475706572751077ULL;
unsigned short var_14 = (unsigned short)41868;
short var_15 = (short)-28120;
long long int var_16 = -6210580541652087368LL;
int zero = 0;
unsigned int var_18 = 3304638272U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14654887695966146520ULL;
long long int var_22 = -1196337129204465567LL;
unsigned int var_23 = 1429534841U;
unsigned char arr_0 [21] [21] ;
signed char arr_3 [21] ;
unsigned char arr_5 [21] [21] [21] ;
unsigned char arr_7 [21] [21] [21] [21] ;
_Bool arr_8 [21] [21] [21] [21] [21] ;
signed char arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)57 : (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-44 : (signed char)71;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
