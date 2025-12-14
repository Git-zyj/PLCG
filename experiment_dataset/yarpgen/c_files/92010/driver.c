#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)121;
_Bool var_14 = (_Bool)1;
unsigned int var_19 = 155877299U;
int zero = 0;
long long int var_20 = -6385167642937400930LL;
long long int var_21 = 4948287357040563722LL;
int var_22 = 1394573251;
int var_23 = -1264337833;
_Bool var_24 = (_Bool)1;
long long int var_25 = -3137905898536599290LL;
_Bool var_26 = (_Bool)0;
long long int var_27 = -216236510884654508LL;
unsigned long long int var_28 = 7832464075648214369ULL;
unsigned char var_29 = (unsigned char)74;
unsigned long long int var_30 = 8741475239622209497ULL;
unsigned long long int var_31 = 10626414382355761434ULL;
short var_32 = (short)-17667;
long long int arr_1 [19] ;
long long int arr_4 [19] [19] [19] ;
int arr_5 [19] [19] [19] [19] ;
_Bool arr_8 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 5197974595414300818LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2159680140385508346LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1733235995;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
