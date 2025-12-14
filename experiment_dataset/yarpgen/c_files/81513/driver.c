#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)179;
unsigned long long int var_2 = 6207786591784029324ULL;
int var_4 = -1787144282;
unsigned long long int var_6 = 731043885419256886ULL;
unsigned long long int var_7 = 3782021119826390256ULL;
unsigned long long int var_8 = 4356335141966621122ULL;
long long int var_10 = 269279911794500060LL;
unsigned short var_11 = (unsigned short)40939;
int zero = 0;
unsigned long long int var_13 = 779065860164955329ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 6025854060507569870ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 8209858920655665458ULL;
unsigned char var_18 = (unsigned char)152;
short var_19 = (short)-11887;
unsigned char var_20 = (unsigned char)208;
unsigned char var_21 = (unsigned char)205;
signed char var_22 = (signed char)-71;
signed char arr_4 [20] ;
_Bool arr_5 [20] ;
long long int arr_7 [20] [20] [20] ;
signed char arr_8 [20] [20] [20] ;
_Bool arr_10 [20] [20] [20] ;
int arr_11 [20] [20] [20] [20] ;
signed char arr_13 [20] [20] ;
unsigned int arr_17 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -2052384594598808081LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -1459413246;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 3217496987U;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
