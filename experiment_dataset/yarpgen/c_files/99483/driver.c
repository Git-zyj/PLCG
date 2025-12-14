#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16992;
unsigned int var_1 = 3210131935U;
unsigned char var_3 = (unsigned char)126;
unsigned short var_6 = (unsigned short)21852;
unsigned long long int var_9 = 68720356816191641ULL;
unsigned long long int var_10 = 13228331177274728075ULL;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2451265604U;
unsigned int var_19 = 664602210U;
int zero = 0;
unsigned int var_20 = 433668476U;
unsigned long long int var_21 = 4726136576074172496ULL;
long long int var_22 = 6504146544495327783LL;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
short var_25 = (short)17689;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 10176009294867138507ULL;
unsigned long long int var_28 = 5690231562828066422ULL;
unsigned int arr_5 [19] [19] ;
unsigned int arr_11 [19] ;
unsigned short arr_15 [19] [19] ;
unsigned int arr_3 [21] ;
_Bool arr_21 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 4198109691U : 430188337U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 68792959U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)35429;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 207141546U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
