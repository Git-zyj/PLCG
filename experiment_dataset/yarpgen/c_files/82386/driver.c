#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 881723333U;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)1572;
int var_5 = -1532132358;
int var_7 = 156128101;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 15798237287135108790ULL;
int zero = 0;
short var_12 = (short)2687;
unsigned int var_13 = 3281636255U;
unsigned int var_14 = 1799408484U;
unsigned long long int var_15 = 8908192718219573239ULL;
unsigned long long int var_16 = 17307573826158513707ULL;
unsigned long long int var_17 = 15836060607699811555ULL;
unsigned char arr_1 [16] ;
_Bool arr_2 [16] ;
long long int arr_5 [16] [16] [16] [16] ;
unsigned short arr_6 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 5624255779259687420LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)42389 : (unsigned short)29772;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
