#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3064431005U;
short var_1 = (short)29301;
int var_2 = 437162849;
long long int var_3 = -4814410076369078783LL;
unsigned short var_5 = (unsigned short)54823;
short var_7 = (short)30715;
short var_9 = (short)7569;
short var_11 = (short)25390;
long long int var_13 = 8682882288324933135LL;
unsigned short var_14 = (unsigned short)16609;
int var_16 = 1004171507;
unsigned short var_17 = (unsigned short)63311;
int zero = 0;
unsigned short var_19 = (unsigned short)13602;
unsigned int var_20 = 2386727075U;
unsigned char var_21 = (unsigned char)88;
short var_22 = (short)19551;
unsigned short var_23 = (unsigned short)11073;
unsigned short arr_1 [14] ;
int arr_2 [14] ;
unsigned char arr_7 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)30778;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -1353419823;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)148;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
