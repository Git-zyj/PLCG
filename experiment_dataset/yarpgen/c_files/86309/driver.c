#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
int var_1 = 2017910946;
long long int var_2 = 5782898983913594288LL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)159;
long long int var_6 = 4163978737480302375LL;
unsigned short var_7 = (unsigned short)26685;
int var_8 = 1073833559;
unsigned long long int var_9 = 18317569483974749254ULL;
long long int var_10 = -2959939041508457909LL;
signed char var_11 = (signed char)-68;
_Bool var_12 = (_Bool)0;
long long int var_13 = -36311320789655230LL;
int zero = 0;
unsigned char var_15 = (unsigned char)206;
unsigned long long int var_16 = 14222672947726169470ULL;
_Bool var_17 = (_Bool)1;
signed char arr_1 [20] [20] ;
signed char arr_3 [20] ;
signed char arr_4 [20] [20] [20] ;
unsigned char arr_5 [20] ;
unsigned short arr_7 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)6923 : (unsigned short)38986;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
