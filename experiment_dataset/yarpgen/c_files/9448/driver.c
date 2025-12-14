#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
unsigned long long int var_2 = 2417718396845006506ULL;
signed char var_4 = (signed char)-51;
short var_7 = (short)-6719;
unsigned long long int var_8 = 6839241440780365474ULL;
long long int var_9 = -4367530732745040797LL;
unsigned short var_10 = (unsigned short)12024;
int zero = 0;
unsigned char var_12 = (unsigned char)199;
short arr_0 [16] ;
unsigned long long int arr_1 [16] ;
short arr_5 [16] [16] ;
long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)23318;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 13916639805387003653ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-6056;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 5629231230343403856LL;
}

void checksum() {
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
