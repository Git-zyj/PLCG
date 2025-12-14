#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2647659158U;
unsigned int var_1 = 1503113587U;
unsigned int var_2 = 1121543010U;
unsigned int var_4 = 3053579402U;
unsigned int var_5 = 1035149731U;
unsigned int var_6 = 4130693869U;
unsigned int var_7 = 3044183405U;
unsigned int var_8 = 3739190562U;
unsigned int var_11 = 628210237U;
int zero = 0;
unsigned int var_14 = 893090506U;
unsigned int var_15 = 3598619795U;
unsigned int var_16 = 3443865879U;
unsigned int var_17 = 3127804033U;
unsigned int var_18 = 4176525135U;
unsigned int var_19 = 516419977U;
unsigned int var_20 = 4242862085U;
unsigned int var_21 = 3949177009U;
unsigned int var_22 = 3756344426U;
unsigned int var_23 = 605500717U;
unsigned int var_24 = 3028924541U;
unsigned int var_25 = 575934670U;
unsigned int var_26 = 392717486U;
unsigned int var_27 = 324045503U;
unsigned int arr_3 [15] ;
unsigned int arr_4 [15] ;
unsigned int arr_6 [15] ;
unsigned int arr_8 [15] ;
unsigned int arr_9 [15] [15] [15] ;
unsigned int arr_10 [15] [15] [15] ;
unsigned int arr_11 [15] [15] [15] [15] ;
unsigned int arr_13 [15] [15] [15] [15] ;
unsigned int arr_14 [15] [15] ;
unsigned int arr_20 [15] ;
unsigned int arr_25 [15] ;
unsigned int arr_2 [21] ;
unsigned int arr_12 [15] [15] ;
unsigned int arr_19 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_22 [15] ;
unsigned int arr_23 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 4006014312U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1650030378U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 2650003130U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 1750774878U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1648384558U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 31720589U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 55089567U : 3766426612U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 7642664U : 3077773789U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 204216965U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = 1098534767U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 2390385058U : 678047360U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2769698025U : 354061865U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 2232553219U : 2834374604U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 2173154906U : 1621187733U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 502994542U : 3835899192U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 2483190439U : 2755031057U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
