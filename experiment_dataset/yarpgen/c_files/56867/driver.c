#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1619841706;
int var_1 = -2001920690;
unsigned long long int var_2 = 16545418743849856165ULL;
signed char var_6 = (signed char)54;
int var_7 = 330397801;
unsigned int var_8 = 2110785661U;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)230;
int var_11 = 1999458681;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-26;
unsigned short var_15 = (unsigned short)4045;
signed char var_16 = (signed char)14;
int var_17 = 438672521;
signed char var_18 = (signed char)-69;
unsigned char var_19 = (unsigned char)133;
signed char arr_0 [20] ;
signed char arr_2 [20] [20] [20] ;
signed char arr_3 [20] [20] ;
int arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-101 : (signed char)-28;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -117009326;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
