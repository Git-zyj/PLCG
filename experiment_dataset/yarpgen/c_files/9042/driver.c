#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1850184981;
unsigned int var_1 = 2619064982U;
unsigned int var_2 = 1707815153U;
signed char var_3 = (signed char)-107;
long long int var_5 = 4133960132448308514LL;
unsigned char var_6 = (unsigned char)246;
long long int var_7 = 4222159436629916154LL;
unsigned int var_8 = 1890964875U;
int var_9 = 1277396246;
unsigned int var_10 = 1756018808U;
unsigned int var_12 = 309727059U;
int zero = 0;
unsigned int var_13 = 3597087373U;
unsigned long long int var_14 = 8991228223309000089ULL;
unsigned int var_15 = 1537421175U;
unsigned int var_16 = 1373253097U;
unsigned long long int var_17 = 5919677479861836367ULL;
short var_18 = (short)-1254;
short var_19 = (short)21855;
int var_20 = -1517153702;
unsigned int var_21 = 127186642U;
unsigned int var_22 = 2576890244U;
unsigned int var_23 = 1162659168U;
_Bool var_24 = (_Bool)0;
short var_25 = (short)-10399;
long long int var_26 = 6286973335846630881LL;
unsigned long long int var_27 = 17295398458502643451ULL;
unsigned short var_28 = (unsigned short)2139;
int var_29 = -1935695136;
long long int var_30 = -6980769391726599911LL;
unsigned int var_31 = 3885209416U;
unsigned long long int var_32 = 12477211413353345159ULL;
unsigned int var_33 = 2789097728U;
short var_34 = (short)2570;
unsigned int var_35 = 1675682448U;
unsigned int var_36 = 2112474075U;
int var_37 = 563667317;
long long int var_38 = -8539840086850563401LL;
unsigned int var_39 = 662103862U;
unsigned int arr_0 [22] ;
long long int arr_1 [22] ;
long long int arr_3 [22] ;
signed char arr_4 [22] [22] ;
int arr_6 [22] [22] [22] ;
int arr_14 [20] [20] [20] ;
int arr_22 [20] [20] [20] ;
long long int arr_24 [20] [20] [20] ;
int arr_25 [20] [20] ;
short arr_36 [20] [20] [20] [20] [20] ;
unsigned long long int arr_37 [20] ;
short arr_26 [20] [20] [20] ;
short arr_27 [20] [20] [20] [20] [20] [20] ;
int arr_28 [20] ;
unsigned char arr_46 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3242566874U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -8222719749220914902LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3943242162603632997LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -365251370 : 1430613795;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -1610803895;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -104417302 : -503236764;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = -3831684170333633555LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_25 [i_0] [i_1] = -691356833;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)-29330 : (short)-3986;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_37 [i_0] = 3826627920591974537ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)16149 : (short)358;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)26154 : (short)1516;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = -244081326;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned char)50;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
