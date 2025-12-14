#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4013968619U;
short var_1 = (short)15122;
long long int var_4 = -6756840329128009962LL;
unsigned int var_6 = 2963573884U;
unsigned long long int var_7 = 14537298729274749424ULL;
unsigned char var_8 = (unsigned char)240;
unsigned int var_9 = 2861218781U;
short var_11 = (short)3018;
int zero = 0;
unsigned short var_12 = (unsigned short)38287;
unsigned int var_13 = 3320454299U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)1889;
short var_16 = (short)24978;
unsigned int var_17 = 3515365849U;
unsigned int var_18 = 3348655995U;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4038009912U;
unsigned long long int var_21 = 18383726351123217325ULL;
short arr_0 [16] [16] ;
long long int arr_1 [16] [16] ;
long long int arr_3 [16] ;
short arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)972;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -7465405452063272322LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -3062738597427399385LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-2633;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
