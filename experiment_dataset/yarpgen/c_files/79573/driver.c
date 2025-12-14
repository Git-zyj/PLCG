#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2220723214281643681LL;
long long int var_4 = 1807388322873377787LL;
int var_7 = -1995810840;
unsigned long long int var_12 = 4396976090551715543ULL;
signed char var_15 = (signed char)102;
int zero = 0;
unsigned long long int var_16 = 5369704288371158273ULL;
unsigned long long int var_17 = 10510082409245624414ULL;
unsigned long long int var_18 = 8707871596652847544ULL;
short var_19 = (short)13805;
unsigned short var_20 = (unsigned short)62736;
unsigned long long int var_21 = 7255329255392648296ULL;
unsigned long long int var_22 = 16681305895887093457ULL;
_Bool var_23 = (_Bool)1;
int arr_0 [14] ;
unsigned char arr_1 [14] [14] ;
short arr_16 [14] ;
long long int arr_17 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 642346904;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)-2615 : (short)2790;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -3136665439068089438LL : -6185250698857718639LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
