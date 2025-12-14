#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
long long int var_1 = -1818362545476714558LL;
unsigned int var_3 = 4160855743U;
long long int var_4 = 6827336217878059204LL;
long long int var_5 = 5190416166312923891LL;
int var_6 = -1598750212;
unsigned short var_9 = (unsigned short)59955;
int var_11 = 1816970890;
unsigned short var_12 = (unsigned short)25254;
int var_14 = -588996082;
long long int var_15 = 5950006283830327461LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-23727;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 16148974070713176640ULL;
unsigned short var_21 = (unsigned short)31791;
unsigned short var_22 = (unsigned short)53297;
_Bool var_23 = (_Bool)0;
unsigned char arr_3 [20] ;
unsigned long long int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 18416794732721948362ULL : 10616003015917265496ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
