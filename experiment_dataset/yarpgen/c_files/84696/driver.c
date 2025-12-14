#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29904;
unsigned short var_2 = (unsigned short)22152;
signed char var_3 = (signed char)-95;
unsigned long long int var_4 = 105129954632846390ULL;
signed char var_7 = (signed char)-23;
unsigned long long int var_10 = 9952178265012605536ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)55509;
signed char var_14 = (signed char)69;
unsigned long long int var_15 = 10881294170388213906ULL;
short var_16 = (short)-5056;
unsigned long long int var_17 = 8098906106316453829ULL;
unsigned short var_18 = (unsigned short)53044;
short arr_0 [24] ;
signed char arr_2 [24] ;
signed char arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)1461;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)123;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
