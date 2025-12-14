#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -3168253681527613619LL;
_Bool var_2 = (_Bool)1;
long long int var_4 = -6919389569344577607LL;
unsigned long long int var_7 = 13802429954645629329ULL;
unsigned long long int var_9 = 4027301406229226316ULL;
long long int var_10 = -3582350173705003976LL;
int zero = 0;
unsigned long long int var_12 = 6486469105621579823ULL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 2660044611984860821ULL;
long long int var_16 = 748750245486818942LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 1130875703786204484ULL;
unsigned long long int var_19 = 1298906382823102701ULL;
long long int var_20 = 7562854966617379098LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 7529754737208920047LL;
unsigned long long int var_23 = 3863849707811946044ULL;
long long int var_24 = -1192389906537303952LL;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 15197025501754667106ULL;
unsigned long long int var_27 = 14500154966387787780ULL;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 3958524424605813149ULL;
unsigned long long int var_30 = 2540782769949792392ULL;
long long int var_31 = -5879382241815658789LL;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 18015061232677511135ULL;
_Bool var_34 = (_Bool)1;
unsigned long long int arr_0 [12] [12] ;
long long int arr_1 [12] ;
long long int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
unsigned long long int arr_5 [16] [16] [16] ;
_Bool arr_7 [16] ;
unsigned long long int arr_8 [16] ;
_Bool arr_11 [16] [16] [16] [16] ;
_Bool arr_12 [16] [16] [16] ;
_Bool arr_14 [16] [16] ;
_Bool arr_16 [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_18 [16] [16] [16] ;
unsigned long long int arr_24 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 17584774305562549152ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1590185999576162901LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 8787984071163632349LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 17870712012328891701ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 174016545724065539ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 11469576931400919990ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 16952069398918951313ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = 17791417257741370505ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
