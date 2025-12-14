#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -95439963;
unsigned long long int var_3 = 10268138833200103846ULL;
unsigned char var_5 = (unsigned char)244;
unsigned char var_6 = (unsigned char)90;
short var_7 = (short)9969;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1692027671U;
long long int var_12 = 5029495301532275881LL;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)184;
int zero = 0;
unsigned char var_16 = (unsigned char)248;
unsigned long long int var_17 = 13230243660053389210ULL;
int var_18 = 1558712191;
unsigned char var_19 = (unsigned char)247;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5364487286480214277LL;
int var_22 = 1672315544;
unsigned int var_23 = 3756987155U;
unsigned char var_24 = (unsigned char)34;
unsigned char arr_3 [24] [24] [24] ;
short arr_5 [24] [24] ;
unsigned long long int arr_9 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (short)16077;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 17773515932739390131ULL : 7775228522795628325ULL;
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
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
