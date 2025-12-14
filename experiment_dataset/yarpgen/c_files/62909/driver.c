#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)10;
int var_4 = -799959897;
long long int var_6 = 7991269833384679697LL;
unsigned char var_7 = (unsigned char)252;
unsigned short var_8 = (unsigned short)62473;
short var_9 = (short)30633;
short var_10 = (short)-16849;
unsigned char var_13 = (unsigned char)129;
long long int var_14 = 4413223249694640430LL;
unsigned long long int var_15 = 4672353121769605796ULL;
unsigned short var_16 = (unsigned short)21129;
unsigned int var_18 = 4281603542U;
unsigned short var_19 = (unsigned short)36920;
int zero = 0;
unsigned short var_20 = (unsigned short)15465;
int var_21 = -1169936431;
_Bool var_22 = (_Bool)0;
long long int var_23 = 5836342956422935240LL;
long long int var_24 = -1969899628625779144LL;
int var_25 = -503996955;
int var_26 = -429073396;
unsigned long long int var_27 = 9484081381222593844ULL;
unsigned int var_28 = 1024579785U;
int var_29 = 1558149633;
long long int var_30 = -7614699620234318617LL;
unsigned short var_31 = (unsigned short)51163;
unsigned short var_32 = (unsigned short)5492;
short var_33 = (short)16553;
unsigned int var_34 = 1738615998U;
unsigned short var_35 = (unsigned short)18166;
unsigned short var_36 = (unsigned short)18433;
_Bool arr_0 [23] ;
unsigned char arr_1 [23] [23] ;
unsigned char arr_5 [23] [23] [23] ;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3365178929U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
