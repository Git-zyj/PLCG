#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -420073836283573879LL;
int var_2 = 782082759;
int var_4 = 1781318851;
unsigned char var_6 = (unsigned char)204;
unsigned char var_7 = (unsigned char)93;
unsigned char var_8 = (unsigned char)201;
unsigned char var_10 = (unsigned char)8;
int var_11 = 1540657636;
short var_12 = (short)-26352;
int var_13 = 661761571;
unsigned long long int var_14 = 5549640376481672136ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)54621;
int var_18 = 1152912866;
int var_19 = -227079132;
short var_20 = (short)1217;
unsigned long long int var_21 = 2032214584281852814ULL;
unsigned int var_22 = 2511321309U;
long long int var_23 = 4128467995908234342LL;
short var_24 = (short)-27524;
unsigned short var_25 = (unsigned short)25427;
int var_26 = -556076736;
long long int arr_2 [16] ;
long long int arr_9 [10] ;
short arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 5133300662292861518LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 3247115728121134194LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (short)12945;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
