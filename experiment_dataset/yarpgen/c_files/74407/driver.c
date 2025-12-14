#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2313732746U;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1363069057U;
unsigned int var_3 = 3218710276U;
unsigned int var_4 = 2407651700U;
unsigned int var_5 = 4155037471U;
unsigned int var_6 = 4218493526U;
unsigned int var_7 = 3738415892U;
unsigned int var_8 = 2536169071U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3033054344U;
unsigned int var_11 = 958857211U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 667699878U;
unsigned int var_14 = 22714345U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3021797448U;
unsigned int var_17 = 1213437570U;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2877449502U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2793664148U;
unsigned int var_23 = 2499804782U;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 2473628872U;
unsigned int var_26 = 1511923527U;
unsigned int var_27 = 791132559U;
unsigned int var_28 = 758600761U;
_Bool var_29 = (_Bool)1;
unsigned int var_30 = 2478690520U;
unsigned int var_31 = 2923089770U;
unsigned int var_32 = 402665024U;
unsigned int var_33 = 3096722464U;
_Bool arr_2 [19] ;
unsigned int arr_16 [18] [18] [18] [18] [18] ;
unsigned int arr_30 [18] ;
_Bool arr_35 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 2997338377U : 968147769U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_30 [i_0] = 1146998813U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_35 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
