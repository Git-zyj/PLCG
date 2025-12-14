#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12872;
signed char var_3 = (signed char)43;
unsigned char var_4 = (unsigned char)6;
short var_6 = (short)28447;
short var_11 = (short)-15723;
signed char var_13 = (signed char)-72;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)-11643;
unsigned char var_17 = (unsigned char)1;
unsigned short var_18 = (unsigned short)14700;
signed char var_19 = (signed char)49;
unsigned long long int var_20 = 14405470171052891113ULL;
unsigned char var_21 = (unsigned char)40;
short var_22 = (short)-26076;
unsigned int var_23 = 1287639260U;
long long int var_24 = 2983128588876087718LL;
signed char var_25 = (signed char)-27;
short arr_0 [12] ;
unsigned char arr_1 [12] ;
unsigned int arr_4 [12] [12] ;
unsigned int arr_7 [12] ;
short arr_8 [12] [12] [12] ;
short arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)26060;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 942914140U : 1288381996U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 3405625877U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)6551;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)25877 : (short)10889;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
